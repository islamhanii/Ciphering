#include "atbash.h"

string Atbash::transfer(string message)
{
    string newMessage = "";
    for(unsigned int i=0; i<message.length(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(message[i] == small[j])
            {
                index = sizeof(small)-1-j;
                newMessage += small[index];
                break;
            }

            else if(message[i] == capital[j])
            {
                index = sizeof(capital)-1-j;
                newMessage += capital[index];
                break;
            }
        }
    }

    return newMessage;
}

void Atbash::cipher(Cipher& obj)
{
    ciph = transfer(obj.getdata());

    cout << "\n-----------------------#Atbash Cipher#-----------------------\n";
    cout << "Ciphered String:\n";
    cout << ciph << "\n\n";
}

void Atbash::deCipher()
{
    deCiph = transfer(ciph);

    cout << "Deciphered String:\n";
    cout << deCiph << endl;
    cout << "\n-------------------------------------------------------------\n";
}
