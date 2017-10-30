#include <string>
#include "blockchain.h"


blockchain::blockchain()
{
    //ctor
    this->previousHash = previousHash;
    // this->blockchain.transactions = transactions;

    // Object[] contents = {Arrays.hashCode(transactions), previousHash};
    // this->blockHash = Arrays.hashCode(contents);
}

blockchain::~blockchain()
{
    //dtor
}

int blockchain::getPreviousHash() {
    return previousHash;
}

int blockchain::getTransaction() {
//    return transctions;
}

int blockchain::getBlockHash() {
    return blockHash;
}
