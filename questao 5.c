/*
Quatão 5 da prova
thales
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Palindrome(char *string) {
    int a = strlen(string);
    int comeca = 0;
    int termina = a - 1;

    while (comeca < termina) {
        if (string[comeca] != string[termina])
            return false;

        comeca++;
        termina--;
    }

    return true;
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);

    if (Palindrome(string))
        printf("A string vai ser um palindromo.\n");
    else
        printf("A string nao vai ser  um palindromo.\n");

    return 0;
}
