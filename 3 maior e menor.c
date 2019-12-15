#include <stdio.h>
#include <stdlib.h>
int funcao_maior()
{
    int a, b;
    scanf("%d%d", &a,&b);
    if (a > b)
    {
        printf("O maior é %d", a);
    }
    if (b > a)
    {
        printf("O maior é %d", b);
    }
    if (a == b)
    {
        printf("Os dois são iguais!");
    }
    return 0;
}

int main ()
{
    printf("Digite dois números inteiros:\n");
    funcao_maior();
    return 0;
}