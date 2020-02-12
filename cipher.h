#ifndef CIPHER_H
#define CIPHER_H
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class Cipher
{
    public:
        void setdata(string);
        string getdata();

    protected:
        int index;
        string data;
        string ciph="";
        string deCiph="";
        char small[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u'
                        ,'v','w','x','y','z'};
        char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'
                        ,'U','V','W','X','Y','Z'};
        string smallBinary[26]={"aaaaa", "aaaab", "aaaba", "aaabb", "aabaa", "aabab", "aabba", "aabbb"
                                , "abaaa", "abaab", "ababa", "ababb", "abbaa", "abbab", "abbba", "abbbb"
                                , "baaaa", "baaab", "baaba", "baabb", "babaa", "babab", "babba", "babbb"
                                , "bbaaa", "bbaab"};
        string capitalBinary[26]={"AAAAA", "AAAAB", "AAABA", "AAABB", "AABAA", "AABAB", "AABBA", "AABBB"
                                , "ABAAA", "ABAAB", "ABABA", "ABABB", "ABBAA", "ABBAB", "ABBBA", "ABBBB"
                                , "BAAAA", "BAAAB", "BAABA", "BAABB", "BABAA", "BABAB", "BABBA", "BABBB"
                                , "BBAAA", "BBAAB"};
};

#endif // CIPHER_H
