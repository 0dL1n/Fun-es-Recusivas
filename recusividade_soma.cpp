#include <stdio.h>

// Fun��o recursiva para calcular a soma
int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);
    int resultado = soma(numero);
    printf("A soma de todos os n�meros de 1 at� %d � %d\n", numero, resultado);
    return 0;
}
