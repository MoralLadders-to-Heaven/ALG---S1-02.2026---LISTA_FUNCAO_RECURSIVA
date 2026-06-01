#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long long soma_recursiva(long long n) {
    if (n <= 1) {
        return n;
    }
    return n + soma_recursiva(n - 1);
}

int main() {
    long long numero;
    SetConsoleOutputCP(65001);
    printf("--- Soma de 1 ate N ---\n");
    printf("Digite o valor de N: ");
    scanf("%lld", &numero);

    if (numero < 1) {
        printf("Por favor, digite um numero maior ou igual a 1.\n");
    }
    else if (numero > 100000) {
        printf("Valor muito grande para recursão! (limite recomendado ~100.000)\n");
        printf("A soma de 1 ate %lld é: %lld\n", numero, numero * (numero + 1) / 2);
    }
    else {
        printf("A soma de 1 ate %lld é: %lld\n", numero, soma_recursiva(numero));
    }

    return 0;
}
