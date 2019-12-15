
#ifndef ALUNOS_H
#define ALUNOS_H
//#include "matricula.h"
#include "ListaM.h"
#include <string.h>
typedef struct alunos Alunos;
struct alunos
{
//    Disciplina* b;
    ListaMatriculas* matriculas;
    char nomeCompleto[20];
    char GRR[20];
    int Idade;
    int AnoDeCadastro;
};

Alunos* criaAlunos(char* nome, char* grr, int idade, int anodecadastro);

void MatriculaEmPosicaoEspecifica(Alunos *pL, Matricula *posicaoAnt, Matricula *pElemNovo);

void MatriculaNoFimDaLista(Alunos *pL, Matricula *pElemNovo);

void ListarDadosAluno(Alunos* CAluno);

void ListarDadosMatriculaAluno(Alunos* a);

float MediaDasNotasAlunos(Alunos* a);

void DeletarMatriculaSemNotaPeloNome(Alunos* a, char* nome);

void DeletarPeloPosicao(Alunos* a, int posicao);

void DeletarOAlunos(Alunos* a, int posicao);

#endif /* ALUNOS_H */

