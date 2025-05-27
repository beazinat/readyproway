/*
Exercício 2: Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e calcule os votos válidos. Calcular e escrever o percentual que cada tipo de voto representa no total de votos.
*/

#include <stdio.h>

int main() {
    int eleitores, brancos, nulos, validos;
    float percentBR, percentNL, percentVL;

    printf("Informe o número total de eleitores do município: ");
    scanf("%d", &eleitores);
        if (eleitores <= 0) {
        printf("O número de eleitores deve ser maior que zero.\n");
        return 1;
    }

    printf("Informe o número de votos brancos: ");
    scanf("%d", &brancos);
    if (brancos < 0 || brancos > eleitores) {
        printf("Número de votos brancos inválido.\n");
        return 1;
    }

    printf("Informe o número de votos nulos: ");
    scanf("%d", &nulos);
        if (nulos < 0 || nulos > eleitores || (brancos + nulos) > eleitores) {
        printf("Número de votos nulos inválido.\n");
        return 1;
    }

    validos = eleitores - brancos - nulos;
    printf("Número total de votos válidos: %d\n", validos);

    system("cls");

    percentBR = (brancos * 100.0f) / eleitores;
    percentNL = (nulos * 100.0f) / eleitores;
    percentVL = (validos * 100.0f) / eleitores;

    printf("\nPercentual de votos brancos: %.2f%%\n", percentBR);
    printf("Percentual de votos nulos: %.2f%%\n", percentNL);
    printf("Percentual de votos válidos: %.2f%%\n", percentVL);

    return 0;
}