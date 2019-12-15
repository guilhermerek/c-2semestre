#include<stdio.h>
#include<stdlib.h>
#include "curso.h"
#include <string.h>

Curso* criarCurso(char* curso, int anoCriacao, int HoraTotal)
{
  Curso* c = (Curso*)malloc(sizeof(Curso));
  strcpy(c -> Curso, curso);
  c -> anoCriacao = anoCriacao;
  c -> HoraTotal = HoraTotal;
  return c;
}   

void listaCurso(Curso* c)
{
  printf("Nome do curso %s \n", c -> Curso);
  printf("Ano de criacao do curso%d \n", c -> anoCriacao);
  printf("Carga horario%d \n", c -> HoraTotal);
}

