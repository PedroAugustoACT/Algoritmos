#include <stdio.h>


void busca(int array[], int numeroProcurado, int media){

    if(numeroProcurado == media){
        printf("NÚMERO %i ENCONTRADO", numeroProcurado);
        return;
    }
    else if(numeroProcurado > media){
        return busca(array, numeroProcurado, media++);
    }
    else if (numeroProcurado < media) {
        return busca(array, numeroProcurado, media--);
    }

}


int main(){

    int array[10] = {0, 2, 4 , 8, 11, 46, 50, 55, 70, 88}, numeroProcurado;
    int media = 10/2;

    printf("QUAL NÚMERO DESEJA ENCONTRAR? ");
    scanf("%i", &numeroProcurado);

    busca(array, numeroProcurado, media);

    return 0;
}