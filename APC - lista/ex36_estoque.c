/*Na gestão de estoques e administração de recursos materiais, a Fórmula do Lote Econômico de Compras (LEC / Modelo de Wilson) estabelece a quantidade exata de compra que equilibra os custos de emissão de pedidos e os custos de posse do estoque.

Roteiro de Cálculos Sequenciais:

1. Tamanho Ideal do Lote Econômico (QLEC
):
QLEC=2⋅D⋅SH−−−−√

2. Frequência de Pedidos no Ano (N
):
Número anual de compras necessárias para atender à demanda:
N=DQLEC

3. Custo Total Anual de Estoque (Custototal
):
Soma do custo anual de pedidos com o custo anual de armazenagem:
Custototal=(N⋅S)+(QLEC2⋅H)

Entrada
A entrada consiste de 3 valores em ponto flutuante (double), lidos em linhas separadas:

D: Demanda anual de itens (unidades/ano);
S: Custo fixo associado a cada pedido emitido em reais (R$/pedido);
H: Custo de manutenção e armazenagem por unidade ao ano em reais (R$/unidade/ano).
Saída
Seu programa deve imprimir exatamente três linhas formatadas em 2 casas decimais:

Lote Economico: Q = X.XX unidades
Numero de Pedidos por Ano: N = Y.YY pedidos
Custo Total de Estoque: R$ Z.ZZ

Por exemplo:

Input	Resultado
12000.0
50.0
3.0
Lote Economico: Q = 632.46 unidades
Numero de Pedidos por Ano: N = 18.97 pedidos
Custo Total de Estoque: R$ 1897.37
5000.0
80.0
5.0
Lote Economico: Q = 400.00 unidades
Numero de Pedidos por Ano: N = 12.50 pedidos
Custo Total de Estoque: R$ 2000.00
25000.0
120.0
2.5
Lote Economico: Q = 1549.19 unidades
Numero de Pedidos por Ano: N = 16.14 pedidos
Custo Total de Estoque: R$ 3872.98*/

#include <stdio.h>
#include <math.h>

int main() {
    double demanda_anual, custo_pedido, manutencao_armazenagem_unidade_aa;
    double lote_economico, pedidos_ano, custo_total_estoque;

    scanf("%lf", &demanda_anual);
    scanf("%lf", &custo_pedido);
    scanf("%lf", &manutencao_armazenagem_unidade_aa);

    lote_economico = sqrt((2*demanda_anual*custo_pedido) / manutencao_armazenagem_unidade_aa);

    pedidos_ano = demanda_anual / lote_economico;

    custo_total_estoque = (pedidos_ano * custo_pedido) + (manutencao_armazenagem_unidade_aa * lote_economico / 2);

    printf("Lote Economico: Q = %.2lf unidades\n", lote_economico);
    printf("Numero de Pedidos por Ano: N = %.2lf pedidos\n", pedidos_ano);
    printf("Custo Total de Estoque: R$ %.2lf\n", custo_total_estoque);

    return 0;
}