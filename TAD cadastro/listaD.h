#ifndef LISTAD_H
#define LISTAD_H

#include "Disciplina.h"


typedef struct ListaD ListaDisciplina;

ListaDisciplina* criaListaDisciplina();

struct ListaD
{
    Disciplina* primeira;
    Disciplina* ultima;
    int * tamanho;
};


void insereIniListaD(ListaDisciplina *pL, Disciplina *pElemNovo);

void insereFimListaD(ListaDisciplina *pL, Disciplina *pElemNovo);

void insereListaPosicaoD(ListaDisciplina *pL, Disciplina *posicaoAnt, Disciplina *pElemNovo);

void removeIniListaD(ListaDisciplina *pL);

void removeListaPosicaoD(ListaDisciplina *pL, Disciplina *posicaoAnt);

Disciplina* buscaDisciplinaD(ListaDisciplina *pL, char codigo[]);


void imprimeListaD(ListaDisciplina *pL);

Disciplina* retornaPrimeiroNOListaD(ListaDisciplina* I);

int MostrarPrimeiroElementoD(ListaDisciplina *pL);

#endif /* LISTAMATRICULA_H */

