#ifndef ATBASH_H
#define ATBASH_H
#include "cipher.h"

class Atbash : public Cipher
{
    public:
        void cipher(Cipher&);
        void deCipher();
        string transfer(string message);
};

#endif // ATBASH_H
