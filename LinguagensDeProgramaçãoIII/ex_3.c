/*
Exercício 3: Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final dele. Considere que a média é ponderada e que o peso das notas é 2, 3 e 5, respectivamente. A fórmula para o cálculo da média final é média final = n1*2 + n2*3 + n3*5 / 10.
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, media_f;

    printf("Digite a nota da primeira prova:");
    scanf("%f", &n1);
    printf("Digite a nota da segunda prova:");
    scanf("%f", &n2);
    printf("Digite a nota da terceira prova:");
    scanf("%f", &n3);

    media_f = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("A média final é: %.2f\n", media_f);

    return 0;
}