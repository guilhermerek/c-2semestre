
#include <stdio.h>
#include <stdlib.h>
#include "ListaM.h"

ListaMatriculas* criaListaMatricula()
{
  ListaMatriculas *pL = (ListaMatriculas*)malloc(sizeof(ListaMatriculas));
  pL -> primeira = NULL;
  pL -> ultima = NULL;
  pL -> tamanho = 0;
  return pL;
}

void insereIniListaM(ListaMatriculas *pL, Matricula *pElemNovo)
{
  if (pL -> primeira != NULL)
  {
    pElemNovo -> pProx = pL -> primeira;
    pL -> primeira = pElemNovo;
  }
  else
  {
    pL -> primeira = pElemNovo;
    pL -> ultima = pElemNovo;
  }
}

void insereFimListaM(ListaMatriculas *pL, Matricula *pElemNovo)
{
  if(pL -> ultima != NULL)
  {
    pL -> ultima -> pProx = pElemNovo;
    pL-> ultima = pElemNovo;
  }
  else
  {
    pL -> primeira = pElemNovo;
    pL -> ultima = pElemNovo;
  }
  
}

void insereListaPosicaoM(ListaMatriculas *pL, Matricula *posicaoAnt, Matricula *pElemNovo)
{
  pElemNovo -> pProx = posicaoAnt -> pProx;
  posicaoAnt -> pProx = pElemNovo;
}

void removeIniListaM(ListaMatriculas *pL)
{
  if (pL -> primeira != NULL)
  {
    pL -> tamanho -= 1;
    Matricula *aux = pL -> primeira;
    pL -> primeira = aux -> pProx;
    free(aux);
    if (pL -> primeira == NULL)
    {
      pL -> ultima = NULL;
    }
  }
  else
  {
    printf("Alista esta vazia");
  }
  
}

void removeListaPosicaoM(ListaMatriculas *pL, Matricula *posicaoAnt)
{
  Matricula *aux = posicaoAnt -> pProx;
  posicaoAnt -> pProx = aux -> pProx;
  free(aux);
}

Matricula* buscaMatriculaM(ListaMatriculas *pL, char* codigo)
{
  Matricula* aux = pL -> primeira; //aux->info com info
  while(aux -> b -> codigo != codigo)
  {
    aux = aux -> pProx;
    
  }
  return aux;
}

void imprimeListaM(ListaMatriculas *pL)
{
  Matricula* pAux = pL -> primeira;
  while (pAux != NULL)
  {
    printf("Nome:%s\n", pAux -> b -> nome);
    printf("Codigo:%s\n", pAux -> b -> codigo);
    printf("Carga horaria: %f\n", pAux -> b -> horaSemanal);
    printf("Nota: %d \n", pAux -> nota);
    printf("Concluido: %d\n", pAux -> concluido);
    pAux = pAux -> pProx;
  }
}

float MediaDasNotas(ListaMatriculas* media)
{
    Matricula* pAux = media -> primeira;
    float soma = 0;
    int quantidade = 0;
  while (pAux != NULL)
  {
      soma = soma + pAux -> nota;
      quantidade = quantidade + 1;
    pAux = pAux -> pProx;
  }
    return soma / quantidade;
}


void DeletarMatriculaPeloNome(ListaMatriculas* pL, char* nome)
{
    Matricula* anterior;
    Matricula* pAux = pL -> primeira;
        while (strcmp(nome, pAux -> b -> nome) != 0)
      {
            anterior = pAux;
            pAux = pAux -> pProx;
      }
    if( pL -> primeira!= NULL)
    {
        Matricula* aux = anterior -> pProx;
        anterior -> pProx = aux -> pProx;
        free(aux);
    }
}


void DeletarMatriculaPeloPosicao(ListaMatriculas* pL, int posicao)
{
    int contador = 1;
        Matricula* pAux = pL -> primeira;
        while (contador != posicao-1)
      {
            pAux = pAux -> pProx;
            contador++;
      }
    if( pL -> primeira!= NULL)
    {
        Matricula* aux = pAux -> pProx;
        pAux -> pProx = aux -> pProx;
        free(aux);
    }
}