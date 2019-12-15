#include <stdlib.h>
#include <stdio.h>

int tabuada()
{
    int i, b;
    scanf("%d", &b);
    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d é %d\n", b, i, i*b);
    }
    return 0;
}

int main ()
{
    printf("Digite um número inteiro para realizar a tabuada:\n");
    tabuada();
    return 0;
}