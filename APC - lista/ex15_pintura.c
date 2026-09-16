/*Uma empresa de pintura precisa calcular os custos e materiais para pintar as quatro paredes internas de uma sala retangular. A sala possui comprimento, largura e altura informados em metros. Sabe-se que 1 litro de tinta cobre exatamente 6 m² de área de parede e que a tinta é vendida a um preço fixo por litro. Além disso, o pintor cobra uma taxa fixa de mão de obra de R$ 15,00 por m² de área pintada.

Considere que a área total das 4 paredes é dada por: 2 * altura * (comprimento + largura).

Entrada
A entrada consiste de quatro números de ponto flutuante, lidos nesta ordem:

O comprimento da sala (em metros).
A largura da sala (em metros).
A altura da sala (em metros).
O preço de 1 litro de tinta (em R$).
Saída
Seu programa deve imprimir três linhas com valores formatados com 2 casas decimais:

Area total: X.XX m2
Tinta necessaria: Y.YY litros
Custo total: R$ Z.ZZ (onde o custo total é a soma do custo da tinta com a mão de obra).
Por exemplo:

Input	Resultado
5.0
4.0
2.8
42.0
Area total: 50.40 m2
Tinta necessaria: 8.40 litros
Custo total: R$ 1108.80*/

#include <stdio.h>

int main() {
    float comprimento, largura, altura, preco_1L, area_total, tinta_necessaria, custo_total;

    scanf(" %f", &comprimento);
    scanf(" %f", &largura);
    scanf(" %f", &altura);
    scanf(" %f", &preco_1L);

    area_total = 2 * altura * (comprimento + largura);
    tinta_necessaria = area_total / 6;
    custo_total = 15*area_total +  preco_1L * tinta_necessaria;

    printf("Area total: %.2f m2\n", area_total);
    printf("Tinta necessaria: %.2f litros\n", tinta_necessaria);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}