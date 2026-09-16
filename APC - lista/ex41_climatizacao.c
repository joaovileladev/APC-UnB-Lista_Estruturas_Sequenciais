/*Uma empresa de engenharia térmica precisa calcular a potência frigorífica necessária para climatizar uma sala comercial e estimar o custo mensal de energia elétrica.

Sabe-se que:

A potência térmica base necessária é calculada por area * 600.0 BTU/h;
Adiciona-se uma carga térmica extra de pessoas * 600.0 BTU/h;
A potência térmica total (BTU/h) é convertida para consumo elétrico médio em Watts dividindo por 3.412;
O consumo mensal de energia em kWh é calculado considerando horas_por_dia * 22 dias úteis no mês: consumo_kwh = (potencia_watts / 1000.0) * horas_por_dia * 22;
O custo mensal estimado em reais é consumo_kwh * tarifa_kwh.
Entrada
A entrada consiste de 4 valores lidos em linhas separadas:

Área da sala em m² (double);
Número de pessoas ocupando o espaço (int);
Horas de funcionamento diário do aparelho (double);
Valor da tarifa de energia em R$/kWh (double).
Saída
Seu programa deve imprimir exatamente três linhas com valores formatados com 2 casas decimais:

Carga Termica Total: X.XX BTU/h
Consumo Mensal: Y.YY kWh
Custo Estimado de Energia: R$ Z.ZZ

Por exemplo:

Input	Resultado
25.0
4
8.0
0.85
Carga Termica Total: 17400.00 BTU/h
Consumo Mensal: 897.54 kWh
Custo Estimado de Energia: R$ 762.91
50.0
10
10.0
0.92
Carga Termica Total: 36000.00 BTU/h
Consumo Mensal: 2321.22 kWh
Custo Estimado de Energia: R$ 2135.52
12.0
2
6.0
0.78
Carga Termica Total: 8400.00 BTU/h
Consumo Mensal: 324.97 kWh
Custo Estimado de Energia: R$ 253.48*/

#include <stdio.h>

int main(void) {

    double area, horas_por_dia, tarifa_kwh;
    int pessoas;

    double carga_termica_base, carga_termica_extra;
    double carga_termica_total;
    double potencia_watts;
    double consumo_kwh;
    double custo_mensal;

    scanf("%lf", &area);
    scanf("%d", &pessoas);
    scanf("%lf", &horas_por_dia);
    scanf("%lf", &tarifa_kwh);

    carga_termica_base = area * 600.0;
    carga_termica_extra = pessoas * 600.0;

    carga_termica_total = carga_termica_base + carga_termica_extra;

    potencia_watts = carga_termica_total / 3.412;

    consumo_kwh = (potencia_watts / 1000.0) * horas_por_dia * 22;

    custo_mensal = consumo_kwh * tarifa_kwh;

    printf("Carga Termica Total: %.2f BTU/h\n", carga_termica_total);
    printf("Consumo Mensal: %.2f kWh\n", consumo_kwh);
    printf("Custo Estimado de Energia: R$ %.2f\n", custo_mensal);

    return 0;
}