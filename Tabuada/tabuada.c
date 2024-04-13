#include <stdio.h>

int main(){
    int a;
    int b;
    int tabuada;

    printf("Digite o número da tabuada: ");
    scanf(" %d", &a);
    printf("Tabuada de %d\n", a);
    for(b = 1; b <= 10; b++) {
        tabuada = a * b;
        printf("%d x %d = %d\n", a, b, tabuada);
    }
    printf("Parabéns! Agora você sabe a Tabuada de %d\n", a);
}
