#include <iostream>
using namespace std;

bool isFibonacci(int x) {
    int a = 0, b = 1;
    
    while (b < x) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return b == x;
}

int main() {
    int fibonacci;
    cout << "Digite um numero: ";
    cin >> fibonacci;

    cout << (isFibonacci(fibonacci) ? "" : "Nao ") << "faz parte da sequencia de Fibonacci!" << endl;

    return 0;
}
