/*Um mestre de obras precisa estimar a quantidade necessária de caixas de piso cerâmico e sacos de argamassa para cobrir uma sala retangular. Sabe-se que:

A área real é calculada por comprimento * largura;
Devido a recortes e perdas técnicas, deve-se adicionar uma margem de segurança de 10% sobre a área calculada (ou seja, multiplicar por 1.10);
Cada caixa de cerâmica cobre exatamente 2.50 m²;
Para a argamassa, o consumo médio é de 5.0 kg por m² de área com perda.
Entrada
A entrada consiste de dois números de ponto flutuante (double), lidos em linhas separadas:

O comprimento do cômodo em metros (m);
A largura do cômodo em metros (m).
Saída
Seu programa deve imprimir exatamente três linhas com valores formatados com 2 casas decimais:

Area com perda: X.XX m2
Caixas necessarias: Y.YY caixas
Argamassa: Z.ZZ kg*/

#include <stdio.h>

int main() {
    double comprimento, largura;
    double area_com_perda, caixas_necessarias, argamassa_necessaria;

    scanf("%lf", &comprimento);
    scanf("%lf", &largura);

    area_com_perda = (largura * comprimento) * 1.1;

    caixas_necessarias = area_com_perda / 2.5;

    argamassa_necessaria = area_com_perda * 5.0;

    printf("Area com perda: %.2lf m2\n", area_com_perda);
    printf("Caixas necessarias: %.2lf caixas\n", caixas_necessarias);
    printf("Argamassa: %.2lf kg\n", argamassa_necessaria);

    return 0;
}