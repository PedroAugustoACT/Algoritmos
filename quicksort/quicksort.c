#include <stdio.h>

void troca(int array[])
{
    /*NÃO ESTÁ PRONTO*/
    int aux;
    aux = array[j];
    array[j] = array[j + 1];
    array[j + 1] = aux;
}
void quicksort(int array[])
{
    int pivo = 8 / 2;

    if (array[pivo] > array[pivo + 1])
    {
        troca(array);
    }
}

int main()
{

    int array[8] = {5, 3, 9, -4, 0, 10, 25, 7};

    quicksort(array);

    return 0;
}