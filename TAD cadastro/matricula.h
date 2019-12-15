

#ifndef MATRICULA_H
#define MATRICULA_H
#include "disciplina.h"
typedef struct matricula Matricula;
struct matricula
{
    Disciplina* b;
    int concluido;
    int nota;
    Matricula* pProx;
};

Matricula* criarMatricula(int concluido, int notafinal, Disciplina* b);

void imprimirValoresMatricula(Matricula* c);

void DeletarMatricula(Matricula* c);

#endif /* NEWFILE_H */

