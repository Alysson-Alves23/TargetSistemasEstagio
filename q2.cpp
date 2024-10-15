//
// Created by User on 14/10/2024.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Digite uma string: ";
    getline(cin, input);

    int count = 0;

    for (char c : input) {
        if (c == 'a' || c == 'A') {
            count++;
        }
    }

    if (count > 0) {
        cout << "A letra 'a' ocorre " << count << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' nao esta presente na string." << endl;
    }

    return 0;
}
