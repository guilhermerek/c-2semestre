#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include<string.h>
typedef struct disciplina Disciplina;
struct disciplina
{
    char nome[20];
    char codigo[20];
    float horaSemanal;
    Disciplina* pProx;
};


Disciplina* criarDisciplina(char* nome, char* codigo, float horaSemanal);

void DeletarDisciplina(Disciplina* d);

void listarDadosDisciplina(Disciplina* d);


#endif /* DISCIPLINA_H */

