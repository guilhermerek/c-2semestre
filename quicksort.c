#include <stdlib.h>
#include <stdio.h>

void trocar(int * vetor, int i, int j)
{
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

int separar(int * vetor, int inicio, int fim)
{
    int pivo = vetor[inicio], i = inicio+1, j = fim;
    while(i <= j)
    {
        if(vetor[i] <= pivo)
        {
            i++;
        }
        else if(vetor[j] > pivo)
        {
            j--;
        }
        else if(i <= j)
        {
            trocar(vetor, i, j);
            i++;
            j--;
        }
    }   
    trocar(vetor, inicio, j);
    return j;
}
void QuickSort(int * vetor, int inicio, int fim)
{
    if(inicio <= fim)
    {
        int j = separar(vetor, inicio, fim);
        QuickSort(vetor, inicio, j-1);
        QuickSort(vetor, j+1, fim);
    }
}



int main ()
{
    int vet [] = {6,4,8,7,2,1,5}; //7
    QuickSort(vet, 0, 7);
    for(int i = 0; i < 7; i++)
    {
        printf("%d", vet[i]);
    }
}