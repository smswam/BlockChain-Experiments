#include <iostream>
#include <string>
#include <vector>
#include "blockchain.h"
#include "md5.h"
#include "sha256.h"

using namespace std;
using std::cout; using std::endl;

// vector<blockchain> blockchain = new ArrayList<>();

unsigned long createNonce(unsigned long increment)
{
    unsigned long Nonce = 0 + increment;
    return Nonce;
}
int main()
{
    string genesisTransactions[] = {"John sent USBank 0.011 bitcoin"};

    cout << "BlockChain" << endl;
    for (unsigned long index = 0; index < 0xFFFF; index++) {
        std::string genesisNonce = to_string(createNonce(index));

        cout << index;
        cout << " sha256 of '"<< genesisTransactions[0] + *genesisNonce << "': " << sha256(genesisTransactions[0] + *genesisNonce) << endl;
    }
    return 0;
}


// Decentralization/Consensus algorithm (distributed consensus)

// Distributed Ledger
// Byzantine Agreement