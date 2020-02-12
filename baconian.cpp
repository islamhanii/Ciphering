#include "baconian.h"

void Baconian::cipher(Cipher& obj)
{
    data = obj.getdata();

    for(unsigned int i=0; i<data.length(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(data[i] == small[j])
            {
                ciph += smallBinary[j];
                break;
            }

            else if(data[i] == capital[j])
            {
                ciph += capitalBinary[j];
                break;
            }
        }
    }

    cout << "\n-----------------------#Baconian Cipher#-----------------------\n";
    cout << "Ciphered String:\n";
    cout << ciph << "\n\n";
}

void Baconian::deCipher()
{
    for(unsigned int i=0; i<ciph.length(); i+=5)
    {
        string tmp="";
        for(int k=i; k<i+5; k++)
        {
            tmp += ciph[k];
        }

        for(int j=0; j<26; j++)
        {
            if(tmp == smallBinary[j])
            {
                deCiph += small[j];
                break;
            }

            else if(tmp == capitalBinary[j])
            {
                deCiph += capital[j];
                break;
            }
        }
    }

    cout << "Deciphered String:\n";
    cout << deCiph << endl;
    cout << "\n-------------------------------------------------------------\n";
}
