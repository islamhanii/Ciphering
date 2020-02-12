#include "caesar.h"

void Caesar::cipher(Cipher& obj)
{
    data = obj.getdata();
    cout << "\nPlease Enter the Number Of shifts:\n";
    cin >> index;
    string tmp = "";

    for(unsigned int i=data.length()-index; i<data.length(); i++)
    {
        tmp += data[i];
    }

    ciph += tmp;

    for(unsigned int i=0; i<data.length()-index; i++)
    {
        ciph += data[i];
    }

    cout << "\n-----------------------#Caesar Cipher#-----------------------\n";
    cout << "Ciphered String:\n";
    cout << ciph << "\n\n";
}

void Caesar::deCipher()
{
    string tmp = "";

    for(int i=0; i<index; i++)
    {
        tmp += ciph[i];
    }

    for(unsigned int i=index; i<ciph.length(); i++)
    {
        deCiph += ciph[i];
    }

    deCiph += tmp;

    cout << "Deciphered String:\n";
    cout << deCiph << endl;
    cout << "\n-------------------------------------------------------------\n";
}
