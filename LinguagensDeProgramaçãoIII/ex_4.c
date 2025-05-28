/*
Exercício 4 - As maçãs custam R$1,50 cada se menos de uma dúzia for comprada. Caso contrário, o preço é R$1,00 cada. Faça um programa que leia a quantidade de maçãs compradas e calcule o total a pagar.
*/

#include <stdio.h>

int main() {
    int quantidade;
    float preco;

    printf("Digite a quantidade de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        preco = quantidade * 1.50;
    } else {
        preco = quantidade * 1.00;
    }

    printf("Total a pagar: R$%.2f\n", preco);

    return 0;
}