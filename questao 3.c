/*
Questão 3 da prova
Thales
*/
#include <stdio.h>

int tamanhoMedio(char str1[], char str2[]) {
    int Str1 = 0, tamaStr2 = 0, contador = 0;
    
    while (str1[contador] != '\0') {
        Str1++;
        contador++;
    }
    
    contador = 0;
    
    while (str2[contador] != '\0') {
        tamaStr2++;
        contador++;
    }
    
    return (Str1 + tamaStr2) / 2;
}

int main() {
    char string001[100], string202[100];
    
    printf("Digite a primeira string: ");
    scanf("%s", string001);
    
    printf("Digite a segunda string: ");
    scanf("%s", string202);
    
    int tamanhoMedioStrings = tamanhoMedio(string001, string202);
    
    printf("O tamanho medio entre as duas strings vai ser: %d\n", tamanhoMedioStrings);
    
    return 0;
}

