/*
Exercício 4 - As maçãs custam R$1,50 cada se menos de uma dúzia for comprada. Caso contrário, o preço é R$1,00 cada. Faça um programa que leia a quantidade de maçãs compradas e calcule o total a pagar.
*/

#include <stdio.h>

/*
Esse algoritmo lê a quantidade de maçãs compradas pelo usuário e calcula o total a pagar com base no preço unitário. Se a quantidade for menor que 12, o preço é R$1,50 por maçã; caso contrário, o preço é R$1,00 por maçã. O programa também informa se o usuário ganhou um desconto especial e quanto economizou.
*/

int main() {
    int quantidade;
    float preco;

    printf("Digite a quantidade de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 0) {
        printf("Quantidade inválida. Digite um valor positivo.\n");
        return 1;
    }

    if (quantidade < 12) {
        preco = quantidade * 1.50;
        printf("Total a pagar: R$%.2f\n", preco);
    } else {
        preco = quantidade * 1.00;
        printf("Parabéns, você ganhou o desconto especial! Total a pagar: R$%.2f\n", preco);
        printf("Quanto você economizou: R$%.2f\n", (quantidade * 1.50) - preco);
    }

    return 0;
}