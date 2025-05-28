/*
Exercício 4 - As maçãs custam R$1,50 cada se menos de uma dúzia for comprada. Caso contrário, o preço é R$1,00 cada. Faça um programa que leia a quantidade de maçãs compradas e calcule o total a pagar.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

/*
Esse algoritmo lê a quantidade de maçãs compradas pelo usuário e calcula o total a pagar com base no preço unitário. Se a quantidade for menor que 12, o preço é R$1,50 por maçã; caso contrário, o preço é R$1,00 por maçã. O programa também informa se o usuário ganhou um desconto especial e quanto economizou.
*/

void mostrar_resultado(HANDLE hConsole, int quantidade) {
    float preco;
    if (quantidade >= 12) {
        preco = quantidade * 1.00f;
        SetConsoleTextAttribute(hConsole, 10);
        printf("Parabéns! Você comprou %d maçãs e ganhou um desconto especial!\n", quantidade);
        printf("Total a pagar: R$%.2f\n", preco);
        SetConsoleTextAttribute(hConsole, 13);
        printf("Você economizou R$%.2f!\n", (1.50f - 1.00f) * quantidade);
    } else {
        preco = quantidade * 1.50f;
        SetConsoleTextAttribute(hConsole, 10);
        printf("Você comprou %d maçãs e não ganhou desconto.\n", quantidade);
        printf("Total a pagar: R$%.2f\n", preco);
        SetConsoleTextAttribute(hConsole, 15);
        printf("Para obter um desconto especial, compre uma dúzia ou mais de maçãs.\n");
    }
    SetConsoleTextAttribute(hConsole, 5);
    printf("----------------------------------------\n");
}

int main() {
    int quantidade = 0, quantidade_adicional;
    char resposta[10];

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleOutputCP(CP_UTF8);

    SetConsoleTextAttribute(hConsole, 5);
    printf("╔══════════════════════════════════════════════╗\n");
    SetConsoleTextAttribute(hConsole, 13);
    printf("║      ");
    SetConsoleTextAttribute(hConsole, 9);
    printf("CALCULADORA DE DESCONTO");
    SetConsoleTextAttribute(hConsole, 13);
    printf("      ║\n");
    SetConsoleTextAttribute(hConsole, 5);
    printf("╚══════════════════════════════════════════════╝\n\n");

    SetConsoleTextAttribute(hConsole, 14);
    printf("Quantas maçãs você comprou? ");
    SetConsoleTextAttribute(hConsole, 15);
    scanf("%d", &quantidade);

    if (quantidade < 0) {
        SetConsoleTextAttribute(hConsole, 14);
        printf("Quantidade inválida! Por favor, insira um número positivo.\n");
        SetConsoleTextAttribute(hConsole, 15);
        return 1;
    }

    while(1) {
        system("cls");
        mostrar_resultado(hConsole, quantidade);

        if (quantidade >= 12)
            break;

        SetConsoleTextAttribute(hConsole, 15);
        printf("Você gostaria de comprar mais maçãs? (S/N): ");
        scanf("%s", resposta);

        if (resposta[0] == 'S' || resposta[0] == 's') {
            SetConsoleTextAttribute(hConsole, 14);
            printf("Digite a quantidade adicional: ");
            SetConsoleTextAttribute(hConsole, 15);
            scanf("%d", &quantidade_adicional);
            if (quantidade_adicional <= 0) {
                SetConsoleTextAttribute(hConsole, 12);
                printf("Quantidade inválida! Por favor, insira um número positivo.\n");
                SetConsoleTextAttribute(hConsole, 15);
                continue;
            }
            quantidade += quantidade_adicional;
            printf("Quantidade total de maçãs: %d\n", quantidade);
        } else {
            break;
        }
    }

    SetConsoleTextAttribute(hConsole, 5);
    printf("Obrigado por usar a calculadora de desconto!\n");

    SetConsoleTextAttribute(hConsole, 15);
    return 0;
}