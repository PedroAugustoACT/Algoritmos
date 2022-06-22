#include <stdio.h>


int busca(int *array, int numeroProcurado, int inicio, int fim){

    int media;
    if(inicio <= fim){
        media = (inicio + fim) / 2;
        if(numeroProcurado == array[media])
        {
            printf("O número %i está no vetor!", numeroProcurado);
            return 0;
        }
        else
        {
            if(numeroProcurado < array[media]){
                return busca(array, numeroProcurado, inicio, media-1);
            }
            else if(numeroProcurado > array[media])
            {
                return busca(array, numeroProcurado, media+1, fim);
            }
        }
    }
    else{
         printf("Que pena, o número %i não está no vetor!", numeroProcurado);
        return -1;
    }
}


int main(){

    int array[10] = {0, 2, 4 , 8, 11, 46, 50, 55, 70, 88}, numeroProcurado;

    printf("QUAL NÚMERO DESEJA ENCONTRAR? ");
    scanf("%i", &numeroProcurado);

    busca(array, numeroProcurado, 0, 9);

    return 0;
}