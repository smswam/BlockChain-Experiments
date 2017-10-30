#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <string>

class blockchain
{
    public:
        blockchain();
        virtual ~blockchain();
        int getPreviousHash();
        int getTransaction();
        int getBlockHash();

    protected:

    private:
        int previousHash;
        // string transactions[];
        int blockHash;
};

#endif // BLOCKCHAIN_H
