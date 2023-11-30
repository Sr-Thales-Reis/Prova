/*
Questão 04 da prova
Thales
*/
#include <stdio.h>
#include <string.h>

double TamanhoMedio(char vetor[][100], int tamanho) {
   int tamanhos = 0;
   int contadorStr = 0;

   int conte = 0;
   while(conte < tamanho) {
      tamanhos += strlen(vetor[conte]);
      contadorStr++;
      conte++;
   }

   double tamanhoMedio = (double)tamanhos / contadorStr;
   return tamanhoMedio;
}

int main() {
   char vetorStrings[][100] = {"Thales", "prova", "linguagem", "Código"};
   int tamanho = sizeof(vetorStrings) / sizeof(vetorStrings[0]);

   double tamanhoMedio = TamanhoMedio(vetorStrings, tamanho);
   printf("O tamanho medio das strings vai ser: %.2f\n", tamanhoMedio);

   return 0;
}
