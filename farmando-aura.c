#include <stdio.h>


int main() {

float nota1, nota2, nota3, nota4, media;

printf("digite a primeira nota:");
scanf("%f", &nota1);

printf("digite a segunda nota:");
scanf("%f", &nota2);

printf("digite a terceira nota:");
scanf("%f", &nota3);

printf("digite a quarta nota:");
scanf("%f", &nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4;

if (media == 10)
{
    printf("aura farmer +1000!\n");
} else if (media >= 7) {
    printf("farmacao de aura +10!\n");
} else if (media >= 5) {
    printf("aura 0%%\n");
} else {
    printf("aura -1000%%\n");
}

    return 0;
}