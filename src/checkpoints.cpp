// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "txdb.h"
#include "main.h"
#include "uint256.h"


static const int nCheckpointSpan = 500;

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
     static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (0, uint256("0x0000017fd6174374929c863b3ef2bc9d867f3a3a468ab1e2f1c9859a593b7a5e"))
		(100, uint256("0xc996d106e20c0bf145a161584034ef61821144a0411e4d699640ccbf6bdcbe54"))
		(1000, uint256("0x97f27f32e876da74ccdd4245c8e44846b890937bd74b0ac1a0729cfa33aab572"))
		(5000, uint256("0x4de3ecd3dd0a569c0783b6b7b320db2ffd7659a9ebc936034535298f87edc9f5"))
		(15000, uint256("0xa2155ade4100abff15be679b9e1b50a265c4c42d3a73fe75f4112d84f049150d"))
		(25000, uint256("0x562ee7a1dc4f35052fcc26f3aa47af4b736752aee28eaacc524945ef4e5a8713"))
		(55000, uint256("0xcebaa030424b2d8dc5b3dc31bdd59279e6a0d8ae223c474bafe5ab383fd80c17"))
		(120000, uint256("0xd22bbfb6694d358730d1170b8c0455fda358addebde6443821267aacd1b9f876"))
		(250000, uint256("0x05c70bd67ef4287172105f72fca303143e71beb7b4c20db4ce590e5da1250a56"))
		(500000, uint256("0x5a41d8fbf6acec8f10bb120f7acbd91cddb1a91f235340ce60966ad806c3c2bf"))
		(1200000, uint256("0xd26bbc7df8192bee5bd187e8fb673157df49e6f73bde14df6def48bfc5fc6b2b"))
        ;


    // TestNet has no checkpoints
    static MapCheckpoints mapCheckpointsTestnet;

    bool CheckHardened(int nHeight, const uint256& hash)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        if (checkpoints.empty())
            return 0;
        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }

    // Automatically select a suitable sync-checkpoint 
    const CBlockIndex* AutoSelectSyncCheckpoint()
    {
        const CBlockIndex *pindex = pindexBest;
        // Search backward for a block within max span and maturity window
        while (pindex->pprev && pindex->nHeight + nCheckpointSpan > pindexBest->nHeight)
            pindex = pindex->pprev;
        return pindex;
    }

    // Check against synchronized checkpoint
    bool CheckSync(int nHeight)
    {
        const CBlockIndex* pindexSync = AutoSelectSyncCheckpoint();

        if (nHeight <= pindexSync->nHeight)
            return false;
        return true;
    }
}
