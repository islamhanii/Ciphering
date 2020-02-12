#ifndef BACONIAN_H
#define BACONIAN_H
#include "cipher.h"

class Baconian : public Cipher
{
    public:
        void cipher(Cipher&);
        void deCipher();
};

#endif // BACONIAN_H
