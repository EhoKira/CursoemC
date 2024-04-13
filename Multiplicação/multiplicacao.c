#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    int mult; 
    mult = x * y;

    printf("O resultado da Multiplicação de %d e %d é: %d\n", x, y, mult);
}