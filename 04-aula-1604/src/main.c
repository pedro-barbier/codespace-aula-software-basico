#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Racional {
    int num;
    int den;
};


int calcularMDC(int a, int b);
void simplificar(struct Racional *r); 
void floatParaRacional(float valor, int *n, int *d); 
struct Racional somar(struct Racional r1, struct Racional r2);
struct Racional multiplicar(struct Racional r1, struct Racional r2);
double racionalParaReal(struct Racional r);

int calcularMDC(int a, int b) {
    int res;

    return res;
}

void simplificar(struct Racional *r) {

}

void floatParaRacional(float valor, int *n, int *d) {
 
}

struct Racional somar(struct Racional r1, struct Racional r2) {

}

struct Racional multiplicar(struct Racional r1, struct Racional r2) {

}

double racionalParaReal(struct Racional r) {

}

// fazer exercícios de struct e strings
int main() {
    float entrada;
    int n_traduzido, d_traduzido;
    
    printf("--- Sistema de Numeros Racionais (Sem Typedef) ---\n");
    printf("Digite um numero real: ");
    scanf("%f", &entrada);

    floatParaRacional(entrada, &n_traduzido, &d_traduzido);

    struct Racional r1;
    r1.num = n_traduzido;
    r1.den = d_traduzido;

    struct Racional r2 = {1, 5}; // Exemplo: 1/3

    printf("Fracao 1: %d/%d\n", r1.num, r1.den);
    printf("Fracao 2: %d/%d\n", r2.num, r2.den);

    struct Racional rSoma = somar(r1, r2);
    struct Racional rMult = multiplicar(r1, r2);

    printf("\nResultados:\n");
    printf("Soma: %d/%d (Real: %.4f)\n", rSoma.num, rSoma.den, racionalParaReal(rSoma));
    printf("Multiplicacao: %d/%d (Real: %.4f)\n", rMult.num, rMult.den, racionalParaReal(rMult));

    return 0;
}