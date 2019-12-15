int main()
{
    void merge(int V[], int comeco, int meio, int fim)
    {
        int com1 = comeco, com2 = meio+1, comecoAux = 0, tamanho = fim-comeco + 1;
    //criando vetor auxiliar
        int * vAux = (int*)malloc(tamanho * sizeof(int));

    //iniciar a concatenação dos dois vetores
        while(com1 <= meio && com2 <= fim)
        {
    //se o primeiro elemento da parte esquerda do vetor for menor que o primeiro da parte direita
            if(V[com1] < V[com2])
            {
                vAux[comecoAux] = V[com1];
                com1++;
            }

            else
            {
        //senão,
            vAux[comecoAux] = V[com2];
            com2++;
            }
        comecoAux++;
        }
    //se, apos concatenar os elementos dos dois lados, sobrou algum elemento na parte esquerda, inserir no vetor auxiliar
    while(com1 <= meio){
        vAux[comecoAux] = V[com1];
        comecoAux++;
        com1++;
    }
    while(com2 <= fim){
    //o mesmo com a parte direita
        vAux[comecoAux] = V[com2];
        comecoAux++;
        com2++;
    }
    //jogando os elementos do vetor auxiliar para o vetor original
    for(comecoAux = comeco; comecoAux <= fim; comecoAux++)
    {
        V[comecoAux] = vAux[comecoAux - comeco];
    }
    free(vAux);
    }
    void mergeSort(int V[], int comeco, int fim)
    {
        if(comeco < fim)
        {
            int meio = (fim+comeco)/2;
            mergeSort(V, comeco, meio);
            mergeSort(V, meio+1, fim);
            merge(V, comeco, meio, fim);
        }
    }
    int vetor[]={8,1,5,4,7,9,6};
    int f = 6;
    mergeSort(vetor, 0, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d", vetor[i]);
    }
}