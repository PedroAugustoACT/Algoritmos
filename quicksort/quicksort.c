#include <stdio.h>

 void troca(int array[], int pivo)
 {
     int aux;
     aux = array[pivo];
     array[pivo] = array[pivo + 1];
     array[pivo + 1] = aux;
 }
void quicksort(int array[], int medio) {
 

  printf("Ordenação: ");

  for (int k = 0; k < 8; k++) {
    printf("%i  ", array[k]);
  }
}

int main() {

  int array[8] = {5, 3, 9, -4, 0, 10, 25, 7};
  int medio = 8/2;

  quicksort(array, medio);

  return 0;
}