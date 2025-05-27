/*
Exercício 2: Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e calcule os votos válidos. Calcular e escrever o percentual que cada tipo de voto representa no total de votos.
*/

#include <stdio.h>
#include <windows.h>

/*
Esse algoritmo utiliza variáveis inteiras para armazenar o número de eleitores, votos brancos, nulos e válidos, além de variáveis de ponto flutuante para os percentuais de cada tipo de voto.
O programa lê os dados do usuário, valida as entradas e calcula os votos válidos e os percentuais de votos brancos, nulos e válidos.
*/

int main() {
    int eleitores, brancos, nulos, validos;
    float percentBR, percentNL, percentVL;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleOutputCP(CP_UTF8);

    SetConsoleTextAttribute(hConsole, 1);  // Azul escuro
    printf("╔════════════════════════════════════════════════════╗\n");
    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("║        ");
    SetConsoleTextAttribute(hConsole, 5);  // Roxo
    printf("CALCULADORA DE VOTOS - MUNICÍPIO");
    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("        ║\n");
    SetConsoleTextAttribute(hConsole, 1);  // Azul escuro
    printf("╚════════════════════════════════════════════════════╝\n\n");

    SetConsoleTextAttribute(hConsole, 6);  // Laranja
    printf("Informe o número total de eleitores do município: ");
    SetConsoleTextAttribute(hConsole, 15); // Branco
    scanf("%d", &eleitores);
        if (eleitores <= 0) {
        SetConsoleTextAttribute(hConsole, 4); // Vermelho
        printf("O número de eleitores deve ser maior que zero.\n");
        SetConsoleTextAttribute(hConsole, 15);
        return 1;
    }

    SetConsoleTextAttribute(hConsole, 6);  // Laranja
    printf("Informe o número de votos brancos: ");
    scanf("%d", &brancos);
    if (brancos < 0 || brancos > eleitores) {
        SetConsoleTextAttribute(hConsole, 4); // Vermelho
        printf("Número de votos brancos inválido.\n");
        SetConsoleTextAttribute(hConsole, 15);
        return 1;
    }

    SetConsoleTextAttribute(hConsole, 6);  // Laranja
    printf("Informe o número de votos nulos: ");
    scanf("%d", &nulos);
    if (nulos < 0 || nulos > eleitores || (brancos + nulos) > eleitores) {
        SetConsoleTextAttribute(hConsole, 4); // Vermelho
        printf("Número de votos nulos inválido.\n");
        SetConsoleTextAttribute(hConsole, 15);
        return 1;
    }

    validos = eleitores - brancos - nulos;

    SetConsoleTextAttribute(hConsole, 1);
    printf("----------------------------------------\n");
    SetConsoleTextAttribute(hConsole, 10);
    printf("Número total de votos válidos: %d\n", validos);

    percentBR = (brancos * 100.0f) / eleitores;
    percentNL = (nulos * 100.0f) / eleitores;
    percentVL = (validos * 100.0f) / eleitores;

    SetConsoleTextAttribute(hConsole, 1);
    printf("----------------------------------------\n");
    SetConsoleTextAttribute(hConsole, 11);
    printf("\nPercentual de votos brancos: ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("%.2f%%\n", percentBR);

    SetConsoleTextAttribute(hConsole, 11);
    printf("Percentual de votos nulos: ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("%.2f%%\n", percentNL);

    SetConsoleTextAttribute(hConsole, 11);
    printf("Percentual de votos válidos: ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("%.2f%%\n", percentVL);

    SetConsoleTextAttribute(hConsole, 1);
    printf("════════════════════════════════════════\n");

    SetConsoleTextAttribute(hConsole, 15);
    return 0;
}