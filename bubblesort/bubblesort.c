#include <stdio.h>

void troca(int array[], int j) {
  int aux;
  aux = array[j];
  array[j] = array[j + 1];
  array[j + 1] = aux;
}

void bubblesort(int array[], int numItens) {
  int aux;

  for (int i = 0; i < numItens; i++) {
    for (int j = 0; j < numItens - 1; j++) {
      if (array[j] > array[j + 1]) {
        troca(array, j);
      }
    }
  }

  printf("Ordenação: ");

  for (int k = 0; k < numItens; k++) {
    printf("%i  ", array[k]);
  }
}

int main() {
  int numItens;

  printf("Digite o número de itens do vetor: ");
  scanf("%i", &numItens);

  int array[numItens];
  for (int i = 0; i < numItens; i++) {
    printf("Digite o indice %i do vetor: ", i);
    scanf("%i", &array[i]);
  }

  printf("Vetor: ");
  for (int j = 0; j < numItens; j++) {
    printf("%i  ", array[j]);
  }

  printf("\n");

  bubblesort(array, numItens);

  return 0;
}