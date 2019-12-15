#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int * CriaVetor(int tamanho)
{
    int* vetor = (int*)malloc(sizeof(int)*tamanho);
    return vetor;
}

void PopularVetor(int * vetor, int tamanho)
{
    for (int i=0; i < tamanho; i++)
    {
        printf("Digite um numero para inserir no vetor\n");
        scanf("%d", &vetor[i]);
    }
}


void LerVetor(int * vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("O vetor na posição %d eh igual a %d\n", i, vetor[i]);
    }
}

void OrdenarVetor (int * vetor, int tamanho)
{
    int aux;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor[j] > vetor[i])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
}

int ** CriaMatriz(int linhas, int colunas)
{
    int** matriz = (int**)malloc(sizeof(int*)*linhas);
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int*) malloc(sizeof(int)*colunas);
    }
    return matriz;
}

void PopularMatriz(int ** matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite numero para inserir na matriz, linha %d coluna %d\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void LerMatriz(int ** matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("a matriz na linha %d e coluna %d eh igual a %d\n", i, j, matriz[i][j]);
        }
    }
}

int* DiagonalPrincipal (int**matriz, int linhas)
{
    int* vetor = CriaVetor(linhas);
    for (int i = 0; i < linhas; i++)
    {   
        vetor[i] = matriz[i][i];
    }
    return vetor;
}

/*int DiagonalPrincipalFuncao (int**matriz, int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        printf("Diagonal principal: linha %d coluna %d valor %d\n", i, i, matriz[i][i]);
    }
    return 0;
}*/

int main()
{
    /*int tamanho;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);
    
    
    int * vetores = CriaVetor(tamanho);
    
    PopularVetor(vetores, tamanho);
    
    OrdenarVetor(vetores, tamanho);
 
    LerVetor(vetores, tamanho);*/
    
    int linhas, colunas;
    printf("Digite a quantia de linhas da matriz\n");
    scanf("%d", &linhas);
    printf("Digite a quantia de colunas da matriz\n");
    scanf("%d", &colunas);
    
    /*int ** matriz = CriaMatriz(linhas, colunas);
    PopularMatriz(matriz, linhas, colunas);
    LerMatriz(matriz, linhas, colunas);*/
    
    int ** MatrizQuadrada = CriaMatriz(linhas, colunas);
    PopularMatriz(MatrizQuadrada,linhas, colunas);
    LerMatriz(MatrizQuadrada, linhas, colunas);
    int* VetorDaDiagonal = DiagonalPrincipal(MatrizQuadrada, linhas);
    //DiagonalPrincipalFuncao(MatrizQuadrada, linhas);
    LerVetor(VetorDaDiagonal, linhas);
}
