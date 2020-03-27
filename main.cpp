///Author: Islam Hani Awad
///Job: Student at FCAI faculty, Cairo University


#include <iostream>
#include <bits/stdc++.h>
#include "cipher.h"
#include "affine.h"
#include "caesar.h"
#include "atbash.h"
#include "baconian.h"

using namespace std;

int main()
{
    int choice;     string data;
    cout << "Welcome To Our Program\n";
    cout << "Please Enter String to Cipher and De Cipher:\n";
    cin >> data;
    Cipher ciph;
    ciph.setdata(data);

    while(true)
    {
        cout << "\nWhat Type Of Ciphering You Want to do\n";
        cout << "Press(1)  To Affine Cipher\n";
        cout << "Press(2)  To Caesar Cipher\n";
        cout << "Press(3)  To Atbash Cipher\n";
        cout << "Press(4)  To Baconian Cipher\n";
        cout << "Press(10) To Enter Another String\n";
        cout << "Press(0)  To Exit\n";
        cout << "Please Enter A Choice:\n";
        cin >> choice;


        if(choice == 1)
        {
            Affine aff;
            aff.cipher(ciph);
            aff.deCipher();
        }

        else if(choice == 2)
        {
            Caesar cae;
            cae.cipher(ciph);
            cae.deCipher();
        }

        else if(choice == 3)
        {
            Atbash atb;
            atb.cipher(ciph);
            atb.deCipher();
        }

        else if(choice == 4)
        {
            Baconian bac;
            bac.cipher(ciph);
            bac.deCipher();
        }

        else if(choice == 10)
        {
            cout << "\nPlease Enter String to Cipher and De Cipher:\n";
            cin >> data;
            ciph.setdata(data);
        }

        else{ cout << "\n\n.... Exiting ....\n"; break; }
    }

    return 0;
}
