#include <stdio.h>
int bemvindo ()
{
    char* n, nome[32];
    scanf("%s", nome);
    n = printf("Seja bem vindo, %s!", nome);
    
    return 0;
}
int main()
{
    char b;
    printf("Olá, digite seu nome:\n");
    bemvindo();
    return 0;
}