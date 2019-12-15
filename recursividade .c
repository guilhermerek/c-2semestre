#include <stdio.h>
#include <stdlib.h>

/*int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1)) + (fibonacci(n - 2));
    }
}

void main()
{
    int n, a;
    scanf("%d", &n);
    a = fibonacci(n);
    printf("%d", a);
}*/

/*void main()
{
    float fatorial = 1, n;
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        fatorial = i * fatorial;
    }
    printf("%f", fatorial);
}*/


int maiorR(int vetor[], int tamanho)
{
    if (tamanho == 1)
    {
        return vetor[0];
    }
    else
    {
        int maior = vetor[tamanho - 1];
        int aux = maiorR(vetor, tamanho -1);
        if ( aux > maior)
        {
            maior = aux;
        }
        return maior;
    }
}

void main ()
{
    int vetor[] = {2,3,1,0}, a;
    a = maiorR(vetor, 4);
    printf("%d", a);
}