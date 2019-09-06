# MelonHeadsProtocol(MHSP)

<p style="text-align:center;"><img src="https://www.melonheads.org/resources/Second_MelonHead_Coin_Side_A.png.opt549x549o0%2C0s549x549.png"></p>

### What is MHSP coin?

MelonHeadsProtocol Is a decentralized electronic currency with a decentralized mining and distribution system implemented by various "nodes" both electronic and anonymous human interactions(mining and distributing). With all the projects opening up with no backing of value, MHSP wants to be the first to offer exclusively the chance to trade the currency for gemstones.

This is done by offering "mining" incentives to both the technological end of the MHSP spectrum and the anonymous user themselves. With our main goal being a system to be able to put your mined gemstones up for trade for MHSP, and vice versa. This will start on the MelonHeads website first in the form of the site offering MHSP trades for raw gemstones our team itself has procured.

### COIN SPECIFICATIONS

```
>Algorithm                    Scrypt
>Block type                   Proof-of-Work/Proof-of-Stake
>Coin name                    MelonHeadsProtocol
>Coin abbreviation            MHSP
>Address letter               M
>Address letter testnet       P
>RPC port                     10999
>P2P port                     21000
>Block reward                 3 coins
>Coin supply                  165000000 coins
>Premine amount               15000000 coins
>PoS percentage               8% per year
>Last PoW block               block 50000000
>Min. stake age               1 hours
>Max. stake age               Unlimited
>Coinbase maturity            6 blocks
>Target spacing               30 seconds
>Target timespan              15 minutes
>Transaction confirmations    3 blocks
```

## OFFICIAL LINKS

  * WEBSITE: https://www.melonheads.org/
  * EXPLORER: https://blockexplorer.melonheads.org/
  * BITCOINTALK: https://bitcointalk.org/index.php?topic=5167342.0
  * ALTMARKET EXCHANGE: https://altmarkets.io/trading/mhspbtc
  * DISCLAIMER: https://www.melonheads.org/Disclaimer.php
  * PRIVACY POLICY: https://www.melonheads.org/Privacy-Policy.php
  * TELEGRAM: https://t.me/joinchat/Mj8fWVknTnumFC1frxCCjw
  * INSTAGRAM: https://www.instagram.com/melonheadsprotocol
  * TWITTER: https://twitter.com/MHSP_Official


### BUILD INSTRUCTIONS
MHSP Coin Linux QT Compiled With Ubuntu 16.04.4 x86_64

INSTALL DEPENDENCIES
---------------------

When running the commands in the build instructions below, copy and paste one line and let it complete before running the next line. Watch for prompts in case you need to respond to a requested input and also to watch for any errors if they occur.
```
sudo add-apt-repository universe
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install build-essential make g++
sudo apt-get install libssl-dev libboost-all-dev libqrencode-dev libminiupnpc-dev software-properties-common libdb4.8-dev libdb4.8++-dev
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qtbase5-dev-tools qt5-qmake qt5-default qttools5-dev-tools libprotobuf-dev protobuf-compiler
```
```
git clone https://github.com/MelonousHeadous/MelonHeadsProtocol.git
cd MelonHeadsProtocol/src
make clean -f makefile.unix
make -f makefile.unix
```
