
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaD.h"

ListaDisciplina* criaListaDisciplina()
{
  ListaDisciplina *pL = (ListaDisciplina*)malloc(sizeof(ListaDisciplina));
  pL -> primeira = NULL;
  pL -> ultima = NULL;
  pL -> tamanho = 0;
  return pL;
}

void insereIniListaD(ListaDisciplina *pL, Disciplina *pElemNovo)
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

void insereFimListaD(ListaDisciplina *pL, Disciplina *pElemNovo)
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

void insereListaPosicaoD(ListaDisciplina *pL, Disciplina *posicaoAnt, Disciplina *pElemNovo)
{
  pElemNovo -> pProx = posicaoAnt -> pProx;
  posicaoAnt -> pProx = pElemNovo;
}

void removeIniListaD(ListaDisciplina *pL)
{
  if (pL -> primeira != NULL)
  {
    pL -> tamanho -= 1;
    Disciplina *aux = pL -> primeira;
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

void removeListaPosicaoD(ListaDisciplina *pL, Disciplina *posicaoAnt)
{
  Disciplina *aux = posicaoAnt -> pProx;
  posicaoAnt -> pProx = aux -> pProx;
  free(aux);
}

Disciplina* buscaDisciplinaD(ListaDisciplina *pL, char codigo[])
{
  Disciplina* aux = pL -> primeira; //aux->info com info
  while(strcmp(aux -> codigo, codigo) != 0)
  {
    printf("verificando %s\n", aux->nome);
    aux = aux -> pProx;
    
  }
  return aux;
}

void imprimeListaD(ListaDisciplina *pL)
{
  Disciplina* pAux = pL -> primeira;
  while (pAux != NULL){
    printf("Nome:%s\n", pAux -> nome);
    printf("Codigo:%s\n", pAux -> codigo);
    printf("hora:%f\n", pAux ->horaSemanal);
    pAux = pAux -> pProx;
  }
}

Disciplina* buscaDisciplinaNome(ListaDisciplina *pL, char nome[])
{
  Disciplina* aux = pL -> primeira; //aux->info com info
  while(strcmp(aux -> nome, nome) != 0)
  {
    printf("verificando %s\n", aux->nome);
    aux = aux -> pProx;
    
  }
  return aux;
}