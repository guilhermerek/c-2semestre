#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int maiorquecinco()
{
    int n;
    scanf("%d", &n);
    if (n > 5)
    {
        printf("%d é maior que cinco!", n);
    }
    if (n == 5)
    {
        printf("%d é igual a cinco", n);
    }
    if (n < 5)
    {
        printf("%d é menor que cinco", n);
    }
    return 0;
}

int main()
{
    printf("Digite um número inteiro:\n");
    maiorquecinco();
    return (0);
}
