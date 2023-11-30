/*
Exercício 01 da prova
Thales
*/
#include <stdio.h>

int fazerOperacao(int num01, int num02) {
    int result;
    
    if (num01 < num02) {
        result = num01 + num02; 
    } else if (num01 == num02) {
        result = num01 * num02; 
    } else {
        result = num01 - num02; 
    }
    return result;
}

int main() {
    int numero1, numero2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    
    int resultado = fazerOperacao(numero1, numero2);
    
    printf("Resultado: %d\n", resultado);
    
    return 0;
}
