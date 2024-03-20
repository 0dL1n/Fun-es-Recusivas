#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Por favor, digite um numero inteiro positivo." << endl;
        return 1;
    }
    
    cout << "A sequencia Fibonacci para " << n << " termos e: " << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

