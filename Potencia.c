#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long long calcular_potencia(long long base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    if (expoente == 1) {
        return base;
    }
    return base * calcular_potencia(base, expoente - 1);
}

int main() {
    SetConsoleOutputCP(65001);

    long long base;
    int expoente;

    printf("--- Cálculo de Potência ---\n\n");

    printf("Digite o número base: ");
    scanf("%lld", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: Este programa calcula apenas expoentes positivos ou zero.\n");
    }
    else if (expoente > 30) {
        printf("Expoente muito alto! O resultado pode ser extremamente grande.\n");
        printf("Recomendamos usar expoentes até 30 com este método recursivo.\n");
    }
    else {
        long long resultado = calcular_potencia(base, expoente);
        printf("\n%lld elevado a %d é: %lld\n", base, expoente, resultado);
    }

    return 0;
}
