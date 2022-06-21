#include <stdio.h>

int main()
{
    int numItens;

    printf("Digite o número de itens do vetor: ");
    scanf("%i", &numItens);

    int array[numItens];
    for (int i = 0; i < numItens; i++)
    {
        printf("Digite o indice %i do vetor: ", i);
        scanf("%i", &array[i]);
    }

    printf("Vetor: ");
    for (int j = 0; j < numItens; j++)
    {
        printf("%i  ", array[j]);
    }

    printf("\n");

    int aux, i;

    for (i = 0; i < numItens; i++)
    {
        for (int j = 0; j < numItens - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    printf("Ordenação: ");

    for (int k = 0; k < numItens; k++)
    {
        printf("%i  ", array[k]);
    }

    return 0;
}