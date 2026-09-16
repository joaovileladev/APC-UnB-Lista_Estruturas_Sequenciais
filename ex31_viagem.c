/*Um motorista deseja planejar os custos de uma viagem de carro. Ele conhece a distância total da viagem (em km), a autonomia do veículo (quantos quilômetros o veículo percorre por litro de combustível) e o preço do litro de combustível (em reais).

Entrada
A entrada consiste de três valores numéricos de ponto flutuante, lidos consecutivamente:

A distância total a ser percorrida em quilômetros (km).
A autonomia do veículo em km/l.
O preço de 1 litro de combustível em R$.
Saída
Seu programa deve imprimir duas linhas formatadas:

A primeira linha contendo o total de litros necessários com 2 casas decimais: Combustivel necessario: X.XX litros
A segunda linha contendo o custo total estimado com 2 casas decimais: Custo total: R$ Y.YY
Por exemplo:

Input	Resultado
300.0
12.0
5.80
Combustivel necessario: 25.00 litros
Custo total: R$ 145.00*/

#include <stdio.h>

int main() {
    double distancia_total, autonomia_Km_L, preco_1L;
    double combustivel_necessario, custo_total;

    scanf("%lf", &distancia_total);
    scanf("%lf", &autonomia_Km_L);
    scanf("%lf", &preco_1L);

    combustivel_necessario = distancia_total / autonomia_Km_L;
    custo_total = combustivel_necessario * preco_1L;

    printf("Combustivel necessario: %.2lf litros\n", combustivel_necessario);
    printf("Custo total: R$ %.2lf\n", custo_total);

    return 0;
}