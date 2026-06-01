#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long long fibonacci(long long n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    SetConsoleOutputCP(65001);

    int quantidade;

    printf("--- Sequência de Fibonacci ---\n\n");

    printf("Quantos termos da sequência você deseja imprimir? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Erro: Por favor, digite um número maior que zero.\n");
    }
    else if (quantidade > 40) {
        printf("Atenção: O método recursivo fica muito lento para muitos termos.\n");
        printf("Limitando a 40 termos para evitar travamento.\n\n");
        quantidade = 40;
    }

    printf("Sequência de Fibonacci:\n");

    for (int i = 0; i < quantidade; i++) {
        printf("%lld ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
