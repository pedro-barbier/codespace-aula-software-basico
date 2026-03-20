#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// prototipos
int isPrimo (int n);
void isPrimoGemeoInInterval(int x, int y);

void isPrimoGemeoInInterval(int x, int y){
    for(int i = x; i <= y; i++) 
    {
        if (isPrimo(i) && isPrimo(i+2))
        {
            printf("--> %d e %d são primos gêmeos\n", i, i+2);
        }
    }
    
}

int isPrimo (int n){
    if (n == 1) return 0;
    
    for (int i = 2; i<=n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }

    return 1;
}

int main() {
    int first, second;

    printf("Digite o intervalo desejado: ");
    scanf("%d %d\n", &first, &second);

    isPrimoGemeoInInterval(first,second);

    return 0;
}
