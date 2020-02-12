#include "affine.h"

void Affine::cipher(Cipher& obj)
{
    data = obj.getdata();

    for(unsigned int i=0; i<data.length(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(data[i] == small[j])
            {
                index = ((5*j)+8)%26;
                ciph += small[index];
                break;
            }

            else if(data[i] == capital[j])
            {
                index = ((5*j)+8)%26;
                ciph += capital[index];
                break;
            }
        }
    }

    cout << "\n-----------------------#Affine Cipher#-----------------------\n";
    cout << "Ciphered String:\n";
    cout << ciph << "\n\n";
}

void Affine::deCipher()
{
    for(unsigned int i=0; i<ciph.length(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(ciph[i] == small[j])
            {
                index = 21*(j-8);
                while (true)
                {
                    if(index >= 0)break;
                    else index+=26;
                }
                index%=26;
                deCiph += small[index];
                break;
            }

            else if(ciph[i] == capital[j])
            {
                index = 21*(j-8);
                while (true)
                {
                    if(index >= 0)break;
                    else index+=26;
                }
                index%=26;
                deCiph += capital[index];
                break;
            }
        }
    }

    cout << "Deciphered String:\n";
    cout << deCiph << endl;
    cout << "\n-------------------------------------------------------------\n";
}
