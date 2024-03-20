#include <iostream>

using namespace std;

void torreHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        cout << "Mova o disco 1 de " << origem << " para " << destino << endl;
        return;
    }
    torreHanoi(n - 1, origem, auxiliar, destino);
    cout << "Mova o disco " << n << " de " << origem << " para " << destino << endl;
    torreHanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int discos;
    cout << "Digite o número de discos: ";
    cin >> discos;
    torreHanoi(discos, 'A', 'C', 'B');
    return 0;
}

