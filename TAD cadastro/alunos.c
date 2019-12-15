#include <stdlib.h>
#include <stdio.h>
#include "alunos.h"

Alunos* criaAlunos(char* nome, char* grr, int idade, int anodecadastro)
{
    Alunos* CAluno = (Alunos*)malloc(sizeof(Alunos));
    strcpy(CAluno -> nomeCompleto, nome);
    strcpy(CAluno -> GRR, grr);
    CAluno -> Idade = idade;
    CAluno -> AnoDeCadastro = anodecadastro;
    CAluno -> matriculas = criaListaMatricula();
    return CAluno;
}

void MatriculaEmPosicaoEspecifica(Alunos *CAluno, Matricula *posicaoAnt, Matricula *pElemNovo)
{
    insereListaPosicaoM(CAluno -> matriculas, posicaoAnt, pElemNovo);
}

void MatriculaNoFimDaLista(Alunos *CAluno, Matricula *pElemNovo)
{
    insereFimListaM(CAluno -> matriculas, pElemNovo);
}

void ListarDadosAluno(Alunos* CAluno)
{
    printf("Nome do Aluno: %s\n", CAluno -> nomeCompleto);
    printf("GRR do Aluno:%s\n", CAluno -> GRR);
    printf("Idade do Aluno:%d\n", CAluno -> Idade);
    printf("Ano de cadastro do aluno:%d\n", CAluno -> AnoDeCadastro);
}

void ListarDadosMatriculaAluno(Alunos* a)
{
    imprimeListaM(a -> matriculas);
}   


float MediaDasNotasAlunos(Alunos* a)
{
    return MediaDasNotas(a -> matriculas);
}


void DeletarMatriculaSemNotaPeloNome(Alunos* a, char* nome)
{
    DeletarMatriculaPeloNome(a -> matriculas, nome);
    
}


/*void DeletarOAlunos(Alunos* a)
{
    DeletarMatricula(a);
    free(a);
}*/


void DeletarPeloPosicao(Alunos* a, int posicao)
{
    DeletarMatriculaPeloPosicao(a -> matriculas, posicao);
}