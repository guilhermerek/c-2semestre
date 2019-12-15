#ifndef LISTAM_H
#define LISTAM_H

#include "matricula.h"


typedef struct ListaM ListaMatriculas;

struct ListaM
{
    Matricula* primeira;
    Matricula* ultima;
    int * tamanho;
};

ListaMatriculas* criaListaMatricula();

void insereIniListaM(ListaMatriculas *pL, Matricula *pElemNovo);

void insereFimListaM(ListaMatriculas *pL, Matricula *pElemNovo);

void insereListaPosicaoM(ListaMatriculas *pL, Matricula *posicaoAnt, Matricula *pElemNovo);

void removeIniListaM(ListaMatriculas *pL);

void removeListaPosicaoM(ListaMatriculas *pL, Matricula *posicaoAnt);

Matricula* buscaMatriculaM(ListaMatriculas *pL, char* codigo);

void DeletarMatriculaPeloNome(ListaMatriculas* pL, char* nome);

void DeletarMatriculaPeloPosicao(ListaMatriculas* pL, int posicao);

void imprimeListaM(ListaMatriculas *pL);

Matricula* retornaPrimeiroNOListaM(ListaMatriculas* I);

int MostrarPrimeiroElementoM(ListaMatriculas *pL);

float MediaDasNotas(ListaMatriculas* media);

#endif /* LISTAMATRICULA_H */

