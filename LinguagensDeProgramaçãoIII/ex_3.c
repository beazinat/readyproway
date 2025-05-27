/*
Exercício 3: Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final dele. Considere que a média é ponderada e que o peso das notas é 2, 3 e 5, respectivamente. A fórmula para o cálculo da média final é média final = n1*2 + n2*3 + n3*5 / 10.
*/

#include <stdio.h>
/*
Esse algoritmo lê três notas de um aluno e calcula a média ponderada delas. As notas são multiplicadas por seus respectivos pesos (2, 3 e 5) e a média final é calculada dividindo a soma ponderada por 10. O resultado é exibido com duas casas decimais. Também há validação para garantir que as notas estejam entre 0 e 10.
*/

int main() {
    float n1, n2, n3, media_f;

    printf("Digite a nota da primeira prova:");
    scanf("%f", &n1);
    if (n1 < 0 || n1 > 10) {
        printf("Nota inválida. Deve ser entre 0 e 10.\n");
        return 1;
    }
    printf("Digite a nota da segunda prova:");
    scanf("%f", &n2);
    if (n2 < 0 || n2 > 10) {
        printf("Nota inválida. Deve ser entre 0 e 10.\n");
        return 1;
    }
    printf("Digite a nota da terceira prova:");
    scanf("%f", &n3);
    if (n3 < 0 || n3 > 10) {
        printf("Nota inválida. Deve ser entre 0 e 10.\n");
        return 1;
    }

    media_f = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("A média final é: %.2f\n", media_f);

    return 0;
}