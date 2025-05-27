/*
Exercício 2: Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e calcule os votos válidos. Calcular e escrever o percentual que cada tipo de voto representa no total de votos.
*/

#include <stdio.h>

int main() {
    int eleitores, brancos, nulos, validos;
    float percentBR, percentNL, percentVL, percentTL;

    printf("Informe o número total de eleitores do município: ");
    scanf("%d", &eleitores);

    printf("Informe o número de votos brancos: ");
    scanf("%d", &brancos);

    printf("Informe o número de votos nulos: ");
    scanf("%d", &nulos);

    validos = eleitores - brancos - nulos;
    printf("Número total de votos válidos: %d\n", validos);

    percentBR = (brancos * 100.0f) / eleitores;
    percentNL = (nulos * 100.0f) / eleitores;
    percentVL = (validos * 100.0f) / eleitores;
    percentTL = percentBR + percentNL + percentVL;

    printf("\nPercentual de votos brancos: %.2f%%\n", percentBR);
    printf("Percentual de votos nulos: %.2f%%\n", percentNL);
    printf("Percentual de votos válidos: %.2f%%\n", percentVL);
    printf("Percentual total de votos: %.2f%%\n", percentTL);

    return 0;
}