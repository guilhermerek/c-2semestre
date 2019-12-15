#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerdadosvetor(int * vet, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf(" Digite um numero para incluir no vetor\n");
        scanf("%d", &vet[i]);
    }
}

void printarnatelaovetor(int * vet, int tamanho)
{
     for (int j = 0; j < tamanho; j++)
    {
        printf("O vetor na posicao %d e %d\n", j, vet[j]);
    }
}

int * criarvetor(int tamanho)
{
    int * vetor = (int *) malloc(sizeof(int) * tamanho);
    return vetor;
}

int somadovetor (int * vetor, int tamanho)
{
    int res = 0;
    for (int i = 0; i < tamanho; i++)
    {
        res = res + vetor[i];
    }
    return res;
}


void transformaimparemzero(int * vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 1)
        {
            vetor[i] = 0;
        }
    }
}


int buscanumero(int * vetor, int numero, int valor)
{
    int resultado;
    for (int i = 0; i < numero; i++)
    {
        if(valor == vetor[i])
        {
            resultado = i;
        }
    }
    return resultado;
}


int** criarmatriz(int linhas, int colunas)
{
    int** matriz = (int**) malloc ((sizeof(int*)) * linhas);
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) malloc ((sizeof(int)) * colunas);
    }
    return matriz;
}

void populamatriz(int ** matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite algum numero\n");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void leitordematriz(int ** matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("A matriz na posicao %d e %d vale a %d\n", i, j, matriz[i][j]);
        }
    }
}

int main(void)
{
    int ex;
    printf("Digite o ex. 1 para vetor e 2 para matrizes e 0 para finalizar\n");
    scanf("%d", &ex);
    
    while (ex != 0)
    {
        if (ex == 1)
        {
            int tamanho, valor;
            printf("Digite o tamanho do vetor\n");
            scanf("%d", &tamanho);

            int * ve = criarvetor(tamanho);

            lerdadosvetor(ve, tamanho);

            printarnatelaovetor(ve, tamanho);

            printf("Digite um numero\n");
            scanf("%d", &valor);
            printf("A posicao de %d e = %d\n", valor, buscanumero(ve, tamanho, valor));

            printf("A soma do vetor e %d\n", somadovetor(ve, tamanho));

            transformaimparemzero(ve, tamanho);

            printarnatelaovetor(ve, tamanho);
        }
        
        else if(ex == 2)
            /*Aqui pega fogo na caixa dagua*/
        {
            int linhas, colunas;
    
            printf("Digite o numero de linhas da matriz\n");
            scanf("%d", &linhas);
            printf("Digite o numero de colunas da matriz\n");
            scanf("%d", &colunas);

            int** matrizes = criarmatriz(linhas, colunas);

            populamatriz(matrizes, linhas, colunas);

            leitordematriz(matrizes, linhas, colunas);
        }
        printf("Digite o ex. 1 para vetor e 2 para matrizes e 0 para finalizar\n");
        scanf("%d", &ex);
    }
}
