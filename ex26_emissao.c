/*O setor financeiro de uma empresa precisa automatizar a emissão de demonstrativos de pagamento de colaboradores horistas. O cálculo envolve salário-base, horas extras com acréscimo de 50%, desconto percentual fixado de previdência social, desconto fixo de auxílio-transporte e a apuração do encargo patronal obrigatório (FGTS) de 8% sobre o salário bruto.

Entrada
A entrada consiste de 5 valores lidos em linhas separadas:

Valor da hora regular de trabalho em reais (double);
Quantidade de horas regulares trabalhadas no mês (double);
Quantidade de horas extras trabalhadas no mês (double);
Alíquota percentual de desconto de previdência social (double, ex: 11.0 para 11%);
Valor fixo a deduzir de auxílio-transporte em reais (double).
Saída
Seu programa deve imprimir exatamente quatro linhas formatadas com 2 casas decimais:

Salario Bruto: R$ X.XX
Desconto Previdencia: R$ Y.YY
Salario Liquido: R$ Z.ZZ
FGTS Patronal: R$ W.WW

Por exemplo:

Input	Resultado
25.00
160.0
10.0
11.0
150.00
Salario Bruto: R$ 4375.00
Desconto Previdencia: R$ 481.25
Salario Liquido: R$ 3743.75
FGTS Patronal: R$ 350.00
50.00
180.0
20.0
14.0
200.00
Salario Bruto: R$ 10500.00
Desconto Previdencia: R$ 1470.00
Salario Liquido: R$ 8830.00
FGTS Patronal: R$ 840.00
18.50
150.0
0.0
9.0
120.00
Salario Bruto: R$ 2775.00
Desconto Previdencia: R$ 249.75
Salario Liquido: R$ 2405.25
FGTS Patronal: R$ 222.00*/

#include <stdio.h>

int main() {
    double valor_hora, horas_trabalhadas, horas_extras, aliquota_percentual, auxilio_transporte;
    double salario_bruto, desconto_previdencia, salario_liquido, fgts_patronal;
    double salario_base, pgmt_horas_extras;

    scanf("%lf", &valor_hora);
    scanf("%lf", &horas_trabalhadas);
    scanf("%lf", &horas_extras);
    scanf("%lf", &aliquota_percentual);
    scanf("%lf", &auxilio_transporte);

    salario_base = valor_hora * horas_trabalhadas;
    pgmt_horas_extras = 1.50 * valor_hora * horas_extras;
    salario_bruto = salario_base + pgmt_horas_extras;

    desconto_previdencia = salario_bruto * (aliquota_percentual / 100);

    salario_liquido = salario_bruto - desconto_previdencia - auxilio_transporte;

    fgts_patronal = salario_bruto * 0.08;

    printf("Salario Bruto: R$ %.2lf\n", salario_bruto);
    printf("Desconto Previdencia: R$ %.2lf\n", desconto_previdencia);
    printf("Salario Liquido: R$ %.2lf\n", salario_liquido);
    printf("FGTS Patronal: R$ %.2lf\n", fgts_patronal);

    return 0;
}