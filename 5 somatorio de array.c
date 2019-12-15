#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{
    int somatorio[10] = {0};
    int total = 0;
    printf("Digite o valor dos 10 números:\n");
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &somatorio[i]);
    }
    for (i = 0; i < 10; i++)
    {
        total = total + somatorio[i];
    }
    printf("O total é %d\n", total);
    printf("o tamanho do array é %d\n", (int) (sizeof(somatorio)) / (sizeof(somatorio[0])));
    return 0;
}
