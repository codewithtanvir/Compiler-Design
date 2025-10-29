// Take two strings as your first and last name, then concatenate the two strings together so that you can find your full name:
// e.g. First name = “XX” and Lastname = “YY”
// output: full name = “XX YY”
#include <iostream>
using namespace std;

string fullName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

int main()
{
    string firstName, lastName;
    cout << "Enter first Name : ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);

    cout << "Full name = " << fullName(firstName, lastName) << endl;
}
