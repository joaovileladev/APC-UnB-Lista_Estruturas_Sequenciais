/*Em sistemas criptográficos simples e algoritmos de verificação de integridade de códigos de barras, é necessário extrair e manipular os dígitos individuais de um número inteiro de 4 dígitos (entre 1000 e 9999).

O programa deve decompor o número em Milhar (M), Centena (C), Dezena (D) e Unidade (U), calcular o valor invertido (U*1000 + D*100 + C*10 + M), a soma de todos os dígitos e o dígito verificador módulo 10 calculado pela fórmula ponderada: DV = ((M * 4) + (C * 3) + (D * 2) + (U * 1)) % 10.

Entrada
A entrada consiste de um único número inteiro de 4 dígitos.

Saída
Seu programa deve imprimir exatamente três linhas no seguinte formato:

Numero Invertido: NNNN
Soma dos Digitos: S
Digito Verificador: DV

Por exemplo:

Input	Resultado
4832
Numero Invertido: 2384
Soma dos Digitos: 17
Digito Verificador: 8
1905
Numero Invertido: 5091
Soma dos Digitos: 15
Digito Verificador: 6
7001
Numero Invertido: 1007
Soma dos Digitos: 8
Digito Verificador: 9
*/

#include <stdio.h>

int main() {
    int number, thousand, hundred, ten, unit;
    int inverted_number, digit_sum, check_digit;

    scanf("%d", &number);

    thousand = number / 1000;
    hundred = (number % 1000) / 100;
    ten = ((number % 1000) % 100) / 10;
    unit = ((number % 1000) % 100) % 10;

    inverted_number = 1000*unit + 100*ten + 10*hundred + thousand;
    digit_sum = thousand + hundred + ten + unit;
    check_digit = ((thousand * 4) + (hundred * 3) + (ten * 2) + (unit * 1)) % 10;

    printf("Numero Invertido: %d\n", inverted_number);
    printf("Soma dos Digitos: %d\n", digit_sum);
    printf("Digito Verificador: %d\n", check_digit);

    return 0;
}