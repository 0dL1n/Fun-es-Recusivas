#include <stdio.h>

// Função recursiva para calcular a soma
int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    int resultado = soma(numero);
    printf("A soma de todos os números de 1 até %d é %d\n", numero, resultado);
    return 0;
}
