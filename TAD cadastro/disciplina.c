/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdlib.h>
#include <stdio.h>
#include "disciplina.h"

Disciplina* criarDisciplina(char* nome, char* codigo, float horaSemanal)
{
    Disciplina* d = (Disciplina*)malloc(sizeof(Disciplina));
    strcpy(d -> nome , nome);
    strcpy(d -> codigo , codigo);
    d -> horaSemanal = horaSemanal;
    d->pProx = NULL;
    return d;
}

void DeletarDisciplina(Disciplina* d)
{
    free(d);
}

void listarDadosDisciplina(Disciplina* d)
{
    if(d == NULL)
    {
        printf("nao ha disciplina");
    }
    else
    {
        printf("Nome %s, Codigo Disciplina %s, Carga horaria %f\n", d -> nome, d -> codigo, d -> horaSemanal);
    }
}
    
