# MelonHeadsProtocol

MelonHeadsProtocol <img src="https://d25lcipzij17d.cloudfront.net/badge.svg?id=gh&type=6&v=1.0.0.0&x2=0">

<img src="https://blockexplorer.melonheads.org/images/logo.png?w1720=&h=321" width="580">

> * __Website:__ [https://www.melonheads.org/](https://www.melonheads.org/)
> * __Blockexplorer:__ [https://blockexplorer.melonheads.org/](https://blockexplorer.melonheads.org/)
> * __Bitcointalk ANN:__ [https://bitcointalk.org/index.php?topic=5167342.0](https://bitcointalk.org/index.php?topic=5167342.0)
> * __Facebook:__ [https://www.facebook.com/alexander.huntington.988](https://www.facebook.com/alexander.huntington.988)
> * __Twitter:__ [https://twitter.com/MelonHe39825419](https://twitter.com/MelonHe39825419)
> * __Discord:__ [https://discordapp.com/channels/529761213215801346/529801382971310080](https://discordapp.com/channels/529761213215801346/529801382971310080)
> * __Altmarket Exchange:__ [https://altmarkets.io/trading/mhspbtc](https://altmarkets.io/trading/mhspbtc)

## What is MHSP coin?

## Specifications:

```
> Algorithm          Scrypt
> Block type         Proof-of-Work/Proof-of-Stake
> Coin name          MelonHeadsProtocol
> Coin abbreviation  MHSP
> Address letter     M
> Address letter testnet    P
> RPC port           10999
> P2P port           21000
> Block reward       3 coins
> Coin supply        165000000 coins
> Premine amount     15000000 coins
> PoS percentage     8% per year
> Last PoW block     block 50000000
> Min. stake age     1 hours
> Max. stake age     Unlimited
> Coinbase maturity  6 blocks
> Target spacing     30 seconds
> Target timespan    15 minutes
> Transaction confirmations    3 blocks
```
## Build instructions

## MHSP Coin Linux QT Compiled With Ubuntu 16.04.4 x86_64 
Install dependencies
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
