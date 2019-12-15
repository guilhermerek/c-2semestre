#ifndef CURSO_H_
#define CURSO_H_
#include <string.h>

typedef struct curso Curso;
struct curso{
  char Curso[20];
  int anoCriacao;
  int HoraTotal;
};

Curso* criarCurso(char* curso, int anoCriacao, int HoraTotal);

void listaCurso(Curso* c);

#endif