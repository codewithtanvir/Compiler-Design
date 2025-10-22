// 3.	Write a program to determine whether the Given Input is Comment line(s) or Not.
// e.g.
// //single line comment

// /* multiple line   
// Comment */

#include <iostream>

using namespace std;

bool isComment (char c){
    char comment[] = {'/'};
    int num_comment = sizeof(comment) / sizeof(comment[0]); 
    for (int i = 0; i < num_comment; i++) {
        if (c == comment[i]) {
            return true;
        }
    }
    return false;
}

int main(){
    cout << "Enter an the line: ";
    string input;
    cin >> input;

    int opCount = 1;
    bool found = false;
    for (char c : input) {
        if (isComment(c)) {
            cout << "comment" << opCount << ":  " << c << endl;
            opCount++;
            found = true;
        }
    }
    if (!found) {
        cout << "No comment found." << endl;
    }
}