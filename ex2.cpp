#include <iostream>

using namespace std;

bool isOperator(char c){
    char operators[] = {'+', '-', '*', '/', '%', '='};
    int num_operators = sizeof(operators) / sizeof(operators[0]); 
    for (int i = 0; i < num_operators; i++) {
        if (c == operators[i]) {
            return true;
        }
    }
    return false;
}

int main(){
    cout << "Enter an expression: ";
    string input;
    cin >> input;

    int opCount = 1;
    bool found = false;
    for (char c : input) {
        if (isOperator(c)) {
            cout << "operator" << opCount << ":  " << c << endl;
            opCount++;
            found = true;
        }
    }
    if (!found) {
        cout << "No operators found." << endl;
    }
}