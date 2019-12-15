#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float cat1, float cat2)
{
    float res;
    res = sqrt((cat1 * cat1) + (cat2 * cat2));
    return res;
}
int primo(int numero)
{
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
            {
                return 0;
            }
    }
    return 1;
}

int main()
{
    int ex;
    printf("Digite o numero do exercicio, 1,2,3 ou 0 para sair!\n");
    scanf("%d", &ex);
    while (ex != 0)
    {
        if (ex == 1)
        {
            float b,c,res;
            printf("Digite o valor de b E c para calcular a hipotenusa:\n");
            printf("b:");
            scanf("%f", &b);
            printf("c:");
            scanf("%f", &c);
            res = hipotenusa(b, c);
            printf("result %f\n", res);
        }
        else if (ex ==2)
        {
            int n;
            printf("Digite um numero para ver se e primo\n");
            scanf("%d", &n);
            if (primo(n) == 1)
            {
                printf("O numero %d e primo\n", n);
            }
            else
            {
                printf("O numero %d nao e primo\n", n);
            }
        }
        else if (ex == 3)
        {        
        int n;
        printf("Digite um numero para verificar se e primo\n");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            if (primo(i) == 1)
            {
                printf("o numero %d e primo\n", i);
            }
            else
            {
                printf("O numero %d nao e primo \n", i);
            }
        }
    }
    printf("Digite o numero do exercicio, 1,2,3 ou 0 para sair!\n");
    scanf("%d", &ex);
    }
    return 0;
}


