#include <stdlib.h>
#include <stdio.h>
int buscaB(int x, int * vetor, int inicio, int fim)
{
    int meio = (inicio + fim) / 2;
    if(vetor[meio] == x)
    {
        return meio;
    }
    else if (inicio == fim-1)
    {
        return -1;
    }
    else if(vetor[meio] < x)
    {
        return buscaB(x, vetor, meio, fim);
    }
    else if (vetor[meio] > x)
    {
        return buscaB(x, vetor, inicio, meio);
    }
}
int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor");
    scanf("%d", &tamanho);
    printf("digite os numeros ordenadamente no vetor");
    int *vetor = (int*) malloc(sizeof(int) * tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int j = 0; j < tamanho; j++)

    {
        printf("N:%d ", vetor[j]);
    }
    int c;
    printf("Digite um numero que quer buscar no vetor");
    scanf("%d", &c);
    int a;
    a = buscaB(c, vetor, 0, tamanho);
    printf("a posiÃ§Ã£o Ã© a:%d", a);
}
//complexidade da busca binaria = log2 (N)

