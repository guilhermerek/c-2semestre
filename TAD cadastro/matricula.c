/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <stdio.h>
#include "matricula.h"


Matricula* criarMatricula(int concluido, int notafinal, Disciplina* b)
{
    Matricula* c = (Matricula*)malloc(sizeof(Matricula));
    c -> concluido = concluido;
    
    c -> nota = notafinal;
    c -> b = b;
    c -> pProx = NULL;
    return c;
}

void DeletarMatricula(Matricula* c)
{
    free(c);
}


void imprimirValoresMatricula(Matricula* c)
{
     if(c -> concluido == 1)
    {
        printf("A nota final é:%d\n", c -> nota);
    }
     if(c -> concluido == 0)
     {
         printf("Nao concluido\n");
     }
     if (c == NULL)
     {
         printf("nao ah matriculas\n");
     }
}





