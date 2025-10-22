// 3.	Write a program to determine whether the Given Input is Comment line(s) or Not.
// e.g.
// //single line comment

// /* multiple line   
// Comment */

#include <iostream>

using namespace std;

void isComment(string line) {
    
    if (line.size() >= 2 && line[0] == '/' && line[1] == '/') {
        cout << "It is a single-line comment" << endl;
        return;
    }

   
    if (line.size() >= 4 && line[0] == '/' && line[1] == '*' && line[line.size() - 2] == '*' && line[line.size() - 1] == '/') {
        cout << "It is a multi-line comment" << endl;
        return;
    }

    cout << "It is not a comment" << endl;
}

int main() {
    cout << "Enter a line: ";
    string input;
    getline(cin, input); 

    isComment(input);

    return 0;
}
