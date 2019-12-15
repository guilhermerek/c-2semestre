#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerNotas(float * n1, float * n2, float * n3)
{
    /*Procedimento para ler a nota, guarda na posicao n1, n2, n3 */
    printf("Digite a primeira nota");
    scanf("%f", n1);
    printf("Digite a segunda nota");
    scanf("%f", n2);
    printf("Digite a terceira nota");
    scanf("%f", n3);
}

float Calcularmediafuncao(float * n1, float * n2, float * n3)
{
    /*pega valores apontado no n1, n2, n3 para fazer a conta e retorna o resultado*/
    float resultado = ((*n1 + *n2 + *n3) / 3);
    return resultado; 
}

void mediaVoid(float * n1, float * n2, float * n3, float * res)
{
    /*pega os valores apontados e recebe na posicao res o resultado da conta*/
    *res = ((*n1 + *n2 + *n3) / 3);
}

int main (void)
{
    
    float nota1, nota2, nota3;
    /*Aponta o valor da nota para as variaveis nota1, nota2, nota3*/
    lerNotas(&nota1, &nota2, &nota3);
    
    
    /*procedimento de media utilizando void, pega o valor apontado nas nota1, nota2, nota3
     e aponta o resultado para a variavel resultadoVoid para utlizar em printf*/
    float resultadoVoid;
    mediaVoid(&nota1, &nota2, &nota3, &resultadoVoid);
    printf("A media utilizando void = %f\n", resultadoVoid);
    
    /*print do resultado da funcao*/
    printf("A media das notas usando funcao = %f\n", Calcularmediafuncao(&nota1, &nota2, &nota3));   
}



/*Explicando a diferença entre funcao e procedimento......
 
 Na funcao se recebe as variaveis para conta, porem eh informado se eh float ou int,
 tambem deve retornar algo, para chamar ela para printar, podemos inserir a funcao no print
 ou se nao, uma variavel declarada float ou int que recebe a funcao, assim armazena seu resultado.
 * 
 * 
 * 
 
 No void nao ha retorno, mas como na funcao recebe variaveis para fazer a conta, para "printar"
   o void devemos colocar uma variavel que recebe o valor de dentro do void, no main chamar esse
  valor e salvar em uma variavel, para ai sim "printar" o resultado, pois o void nao recebe o 
  retorno.
 
 */