// 1.	Write a program to determine whether the Given Input is Numeric Constant or Not.
// e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”, or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).

#include <iostream>
#include <string>
using namespace std;
bool isNum(const string &S)
{
    for (size_t i = 0; i < S.length(); i++)
    {
        if (S[i] < 48 || S[i] > 57)
        {
            return false;
        }
    }

    return true;

}


int main()
{

    cout<<isNum("44A4");

}