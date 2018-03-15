#include <iostream>
#include <string>
#include <vector>
#include "blockchain.h"
#include "md5.h"
#include "sha256.h"

using namespace std;
using std::cout; using std::endl;

// vector<blockchain> blockchain = new ArrayList<>();

int main()
{
    string genesisTransactions[] = {"John sent USBank 0.011 bitcoin", "USBank sent 40 bitcoins to American Express"};

    cout << "BlockChain" << endl;
    cout << "md5 of '"<< genesisTransactions[0] << "': " << md5("genesisTransactions[0]") << ": MD5 is now considered insecure" << endl;

    string output1 = sha256(genesisTransactions[0]);

    cout << "sha256 '" << genesisTransactions[0] << "': " << output1 << endl;

    genesisTransactions[0] = genesisTransactions[0] + ", " += genesisTransactions[1];

    output1 = sha256(genesisTransactions[0]);
    cout << "sha256 '" << genesisTransactions[0] << "': " << output1 << endl;
    return 0;
}


// Consensus algorithm
