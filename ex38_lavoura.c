/*Um produtor rural utiliza um sistema de irrigação por gotejamento para suprir uma plantação de hortaliças a partir de um reservatório cilíndrico de água.

Dados e parâmetros do sistema:

A lavoura possui um número n_linhas de fileiras de plantio, cada uma contendo gotejadores_por_linha emissores;
Cada gotejador possui uma vazão nominal de vazao_litros_hora litros por hora (L/h);
A vazão total consumida pelo sistema em litros por hora é: vazao_total = n_linhas * gotejadores_por_linha * vazao_litros_hora;
O consumo diário da irrigação (em litros) considerando um tempo de funcionamento diário de horas_dia é: consumo_diario = vazao_total * horas_dia;
A autonomia do reservatório (em dias completos e fração decimal) para um volume armazenado capacidade_litros é: autonomia_dias = capacidade_litros / consumo_diario.
Entrada
A entrada consiste de 5 valores lidos em linhas separadas:

Número de linhas de plantio (int);
Número de gotejadores por linha (int);
Vazão nominal por gotejador em L/h (double);
Horas de irrigação por dia (double);
Capacidade atual do reservatório em litros (double).
Saída
Seu programa deve imprimir exatamente três linhas formatadas com 2 casas decimais:

Vazao Total do Sistema: X.XX L/h
Consumo Diario de Agua: Y.YY Litros/dia
Autonomia do Reservatorio: Z.ZZ dias

Por exemplo:

Input	Resultado
20
50
2.0
4.0
24000.0
Vazao Total do Sistema: 2000.00 L/h
Consumo Diario de Agua: 8000.00 Litros/dia
Autonomia do Reservatorio: 3.00 dias
10
40
1.5
3.5
10000.0
Vazao Total do Sistema: 600.00 L/h
Consumo Diario de Agua: 2100.00 Litros/dia
Autonomia do Reservatorio: 4.76 dias
35
80
2.2
5.0
80000.0
Vazao Total do Sistema: 6160.00 L/h
Consumo Diario de Agua: 30800.00 Litros/dia
Autonomia do Reservatorio: 2.60 dias*/

#include <stdio.h>

int main() {
    int linhas_plantio, gotejadores_por_linha;
    double vazao_nominal, horas_irrigacao_dia, capacidade_atual;
    double vazao_total, consumo_diario_agua, autonomia_reservatorio;

    scanf("%d", &linhas_plantio);
    scanf("%d", &gotejadores_por_linha);
    scanf("%lf", &vazao_nominal);
    scanf("%lf", &horas_irrigacao_dia);
    scanf("%lf", &capacidade_atual);
    
    vazao_total = linhas_plantio * gotejadores_por_linha * vazao_nominal;

    consumo_diario_agua = vazao_total * horas_irrigacao_dia;

    autonomia_reservatorio = capacidade_atual / consumo_diario_agua;

    printf("Vazao Total do Sistema: %.2lf L/h\n", vazao_total);
    printf("Consumo Diario de Agua: %.2lf Litros/dia\n", consumo_diario_agua);
    printf("Autonomia do Reservatorio: %.2lf dias\n", autonomia_reservatorio);

    return 0;
}