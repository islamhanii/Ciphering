#ifndef CAESAR_H
#define CAESAR_H
#include "cipher.h"

class Caesar : public Cipher
{
    public:
        void cipher(Cipher&);
        void deCipher();
};

#endif // CAESAR_H
