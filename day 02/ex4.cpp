// 4.	Write a program to determine whether the Given Input is Identifier or Not. []
// Conditions/convention to detect identifier:
// a)	The first character should be alphabet characters/underscore (A-Z, a-z, _)
// b)	From the Second character should be alpha-numeric characters/underscore (A-Z, a-z, _ , 0-9)


#include <iostream>
using namespace std;

bool isIdentifier(const string &input)
{
    if (input.empty())
        return false;

    char firstChar = input[0];
    if (!((firstChar >= 'A' && firstChar <= 'Z') || (firstChar >= 'a' && firstChar <= 'z') || firstChar == '_'))
        return false;

    for (int i = 1; i < input.length(); i++)
    {
        char ch = input[i];
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || ch == '_'))
            return false;
    }

    return true;
}

int main()
{
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (isIdentifier(input))
        cout << "Valid Identifier" << endl;
    else
        cout << "Invalid Identifier" << endl;

    return 0;
}