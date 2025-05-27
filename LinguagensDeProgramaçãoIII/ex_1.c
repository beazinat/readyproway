/*
 * Exercício 1: Escreva um programa que determine a idade de uma pessoa em dias a partir de sua data de nascimento.
 */
#include <stdio.h>
#include <time.h>
#include <windows.h>

/*
Esse programa utiliza a biblioteca time.h para trabalhar com datas e horas, assim como a função difftime() para calcular a diferenca em dias entre duas datas.
Além disso, ele considera o fuso horário local ao calcular a diferença de tempo, facilitando o cálculo da idade em dias de forma precisa.
 * O usuário deve inserir sua data de nascimento no formato DD MM AAAA, e o programa calculará a idade em dias desde essa data até a data atual.
 * A função mktime() é utilizada para converter a estrutura tm em um valor de tempo que pode ser manipulado.
*/

int main()
{
    int dia_nasc, mes_nasc, ano_nasc;
    struct tm data_nasc = {0}, data_atual = {0};
    time_t t_nasc, t_atual;
    double diff_dias;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("========================================\n");
    SetConsoleTextAttribute(hConsole, 10); // Verde claro
    printf("  CALCULADORA DE IDADE EM DIAS\n");
    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("========================================\n\n");
    SetConsoleTextAttribute(hConsole, 14); // Amarelo
    printf("Informe sua data de nascimento\n");
    printf("Formato: DD MM AAAA\n");
    printf("Exemplo: 27 05 2000\n");
    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("----------------------------------------\n");
    SetConsoleTextAttribute(hConsole, 15); // Branco
    printf("Digite sua data de nascimento: ");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    data_nasc.tm_mday = dia_nasc;
    data_nasc.tm_mon = mes_nasc - 1;
    data_nasc.tm_year = ano_nasc - 1900;

    time(&t_atual);
    data_atual = *localtime(&t_atual);

    t_nasc = mktime(&data_nasc);

    diff_dias = difftime(t_atual, t_nasc) / (60 * 60 * 24);

    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("\n----------------------------------------\n");
    SetConsoleTextAttribute(hConsole, 10); // Verde claro
    printf("Voce tem %.0f dias de vida.\n", diff_dias);
    SetConsoleTextAttribute(hConsole, 11); // Azul claro
    printf("========================================\n");

    SetConsoleTextAttribute(hConsole, 15); // Reset para branco

    return 0;
}