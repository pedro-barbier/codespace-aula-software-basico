#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void multiplica(int* x);
void maior(int vetor[], int tam, int* maior);
void trocar(int *a, int *b);
void dobrar(int *x);
void dobroTriplo(int *a, int *b);
void maiorMenor(int a, int b, int *maior, int *menor);
void divisao(int dividendo, int divisor, int *quociente, int *resto);
void ordenar2(int *a, int *b);
void avaliarAluno(float n1, float n2, float n3, float *media, int *situacao);
void contarTipos(int v[], int n, int *positivos, int *negativos, int *zeros);
void maxMinVetor(int v[], int n, int *max, int *min);
void estatisticas(int v[], int n, int *soma, float *media, int *maior, int *menor);

void multiplica(int* x){
    *x = *x * *x;
}

void maior(int vetor[], int tam, int* v_maior){
    *v_maior = vetor[0];
    int i;
    for(i = 1; i<tam; i++)
        if(vetor[i>*v_maior])
            *v_maior = vetor[i];
    
}

// Escreva um programa em C que leia dois números inteiros e utilize uma função chamada trocar para inverter os valores entre as duas variáveis.
void trocar(int *a, int *b){

}

// Escreva um programa que leia um número inteiro e utilize uma função chamada dobrar para alterar diretamente o valor da variável, substituindo-o pelo seu dobro.
void dobrar(int *x){

}

// Escreva um programa que leia dois números inteiros. Crie uma função que altere o primeiro número para o seu dobro e o segundo número para o seu triplo.
void dobroTriplo(int *a, int *b){

}

// Crie um programa que leia dois números inteiros e utilize uma função para determinar qual é o maior valor e qual é o menor valor. A função deve devolver essas duas respostas por meio de parâmetros por referência.
void maiorMenor(int a, int b, int *maior, int *menor){

}

// Escreva um programa que leia dois números inteiros: dividendo e divisor. Implemente uma função que calcule o quociente da divisão inteira e o resto da divisão. Esses dois resultados devem ser retornados por referência.
void divisao(int dividendo, int divisor, int *quociente, int *resto){

}

// Escreva um programa que leia dois números inteiros e utilize uma função para garantir que, ao final, a primeira variável contenha o menor valor e a segunda variável contenha o maior valor.
void ordenar2(int *a, int *b){

}

// Escreva um programa que leia três notas de um aluno e utilize uma função para calcular a média final e a situação do aluno.
// Requisitos:
//     • Regras: média >= 7,0 → Aprovado; média >= 4,0 e < 7,0 → Recuperação; média < 4,0 → Reprovado.
//     • A média deve ser retornada por referência.
//     • A situação deve ser retornada por referência por meio de um código: 1 = Aprovado, 2 = Recuperação, 3 = Reprovado.
void avaliarAluno(float n1, float n2, float n3, float *media, int *situacao){

}

// Dado um vetor de 10 elementos. Implemente uma função que conte quantos valores são positivos, negativos e iguais a zero. Essas quantidades devem ser retornadas por referência.
void contarTipos(int v[], int n, int *positivos, int *negativos, int *zeros){

}

//Dado um vetor de 10 elementos. Crie uma função que identifique o maior elemento do vetor e o menor elemento do vetor. Esses dois valores devem ser retornados por referência.
void maxMinVetor(int v[], int n, int *max, int *min){

}

// Dado um vetor de 10 elementos. Implemente uma função que retorne, por referência: a soma de todos os elementos, a média dos elementos, o maior valor e o menor valor.
void estatisticas(int v[], int n, int *soma, float *media, int *maior, int *menor){

}

// Aula 02, dia 26 de março de 2026/1, sobre passagem de parâmetros e ponteiros
int main() {

}
