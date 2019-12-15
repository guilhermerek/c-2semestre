#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potencia(int y, int z)
{
    int resultado;
    resultado = pow (y,z);
    printf("A potencia de %d elevado a %d é %d", y, z, resultado);
    return 0;
}

int main()
{
    int b, e;
    printf("Digite a base:\n");
    scanf("%d", &b);
    printf("Digite o expoente:\n");
    scanf("%d", &e);
    potencia(b, e);
    return 0;
}
