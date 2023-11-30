/*
Exercício 02 da prova
Thales
*/
#include <stdio.h>
int calcularFatorial(int num01) {
    int resul = 1;
    int carro = num01;

    while (carro > 1) {
        resul *= carro;
        carro--;
    }
    return resul;
}
int main() {
    int numero, fatorial;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    fatorial = calcularFatorial(numero);

    printf("O fatorial de %d vai ser: %d\n", numero, fatorial);

    return 0;
}
