#ifndef AFFINE_H
#define AFFINE_H
#include "cipher.h"

class Affine : public Cipher
{
    public:
        void cipher(Cipher&);
        void deCipher();
};

#endif // AFFINE_H
