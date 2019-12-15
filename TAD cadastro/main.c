#include <stdio.h>
#include <stdlib.h>
//#include "disciplina.h"
//#include "matricula.h"
#include "listaD.h"
#include "alunos.h"
//#include "curso.h"
#include<string.h>

/*
 * 
 */
int main() 
{
    Disciplina* d1;
    char nome[20], grr[20], nomemateria[20], codigo[20], codigoD[20], curo[20];
    int idade, ano, horas, aninho, horinha;
    float nota;
    ListaDisciplina* ListaDeDisciplinas =  criaListaDisciplina();
    printf("Digite o nome:\n");
    scanf(" %s", nome);
    printf("Digite o GRR:\n");
    scanf(" %s", grr);
    printf("Digite a idade do aluno: \n");
    scanf(" %d", &idade);
    printf("Digite o ano de Cadastro:\n");
    scanf(" %d", &ano);
    Alunos* a1 = criaAlunos(nome, grr, idade, ano);
    printf("Selecione a opcao:\n [1]Criar uma nova disciplina\n [2]Matricular-se em uma disciplina\n [0]Sair\n");
    int escolha = -1;
    
    //printf("Selecione a opcao:\n [1]Criar uma nova disciplina\n [2]Matricular-se em uma disciplina\n [0]Sair\n");
    scanf(" %d", &escolha);
    while(escolha != 0)
    {
        switch(escolha)
        {
            case 1:
                printf("Digite o nome da materia:\n");
                scanf(" %s", nomemateria);
                printf("Digite o codigo da materia:\n");
                scanf(" %s", codigo);
                printf("Digite as horas da materia:\n");
                scanf(" %d", &horas);
                d1 = criarDisciplina(nomemateria, codigo, horas);
                insereFimListaD(ListaDeDisciplinas, d1);
                imprimeListaD(ListaDeDisciplinas);
                printf("-----\n");
                break;
            case 2:
                imprimeListaD(ListaDeDisciplinas);
                printf("Digite o codigo da disciplina que deseja matricular:\n");
                scanf(" %s", codigoD);
                Disciplina* busca = buscaDisciplinaD(ListaDeDisciplinas, codigoD);
                if (busca != NULL)
                {
                    int concluido;
                    printf("Digite se foi concluido 1 para sim, 2 para nao:\n");
                    scanf("%d", &concluido);
                    
                    if(concluido == 1)
                    {
                        printf("Digite a nota:\n");
                        scanf(" %f", &nota);
                        Matricula* m1 = criarMatricula(concluido, nota, busca);
                        MatriculaNoFimDaLista(a1, m1);
                        ListarDadosAluno(a1);
                        ListarDadosMatriculaAluno(a1);    
                    }
                    else
                    {
                        printf("disciplina nao concluida\n");
                        Matricula* m1 = criarMatricula(0, 0, busca);
                        MatriculaNoFimDaLista(a1, m1);
                        ListarDadosAluno(a1);
                        ListarDadosMatriculaAluno(a1); 
                    }
                }
                else
                {
                    printf("disciplina nao encontrada\n");
                }
                
                break;
            case 3:
                DeletarMatriculaSemNotaPeloNome(a1, nomemateria);
                printf("A media e: %f", MediaDasNotasAlunos(a1));
                DeletarPeloPosicao(a1, 1);
                break;
                
            case 4:
                printf("Digite o nome da curso:\n");
                scanf(" %s", curo);
                printf("Digite o ano da criacao do curso:\n");
                scanf(" %s", &aninho);
                printf("Digite as horas do curso:\n");
                scanf(" %d", &horinha);
                d1 = criarDisciplina(curo, aninho, horinha);
                listaCurso(d1);
                break;
        }
        scanf("%d", &escolha);
    }
    
    return (EXIT_SUCCESS);
}

