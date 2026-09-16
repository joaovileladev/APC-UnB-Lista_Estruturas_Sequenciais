/*Em um laboratório de química, um técnico prepara uma solução aquosa concentrada de um reagente e, em seguida, realiza sua diluição para atingir um volume de trabalho final.

As etapas e fórmulas do preparo são:

Massa molar do soluto (g/mol): massa_molar;
Massa pesada do soluto em gramas: massa_g;
Volume inicial da solução concentrada em mililitros (mL): v1_ml;
Volume em litros da solução concentrada: v1_l = v1_ml / 1000.0;
Concentração molar inicial da solução concentrada: c1 = massa_g / (massa_molar * v1_l) (em mol/L);
Para preparar uma solução diluída adicionando água até um volume final v2_ml, a nova concentração molar é obtida pela lei de diluição ($C_1 \cdot V_1 = C_2 \cdot V_2$): c2 = (c1 * v1_ml) / v2_ml;
Volume de água pura adicionado no processo: v_agua_adicionada = v2_ml - v1_ml.
Entrada
A entrada consiste de 4 números em ponto flutuante (double), lidos em linhas separadas:

Massa pesada do soluto em gramas (massa_g);
Massa molar do composto químico em g/mol (massa_molar);
Volume inicial da solução concentrada em mL (v1_ml);
Volume final desejado da solução diluída em mL (v2_ml).
Saída
Seu programa deve imprimir três linhas formatadas com 3 casas decimais:

Concentracao Concentrada: C1 = X.XXX mol/L
Concentracao Diluida: C2 = Y.YYY mol/L
Agua Adicionada: Z.ZZZ mL

Por exemplo:

Input	Resultado
58.44
58.44
250.0
1000.0
Concentracao Concentrada: C1 = 4.000 mol/L
Concentracao Diluida: C2 = 1.000 mol/L
Agua Adicionada: 750.000 mL
40.00
98.08
100.0
500.0
Concentracao Concentrada: C1 = 4.078 mol/L
Concentracao Diluida: C2 = 0.816 mol/L
Agua Adicionada: 400.000 mL
12.50
74.55
200.0
800.0
Concentracao Concentrada: C1 = 0.838 mol/L
Concentracao Diluida: C2 = 0.210 mol/L
Agua Adicionada: 600.000 mL*/

#include <stdio.h>

int main() {
    double massa, massa_molar, volume_inicial_mL, volume_final_mL;
    double concentracao_concentrada, concentracao_diluida, agua_adicionada;
    double volume_L;

    scanf("%lf", &massa);
    scanf("%lf", &massa_molar);
    scanf("%lf", &volume_inicial_mL);
    scanf("%lf", &volume_final_mL);

    volume_L = volume_inicial_mL / 1000.0;
    concentracao_concentrada = massa / (massa_molar * volume_L);

    concentracao_diluida = (concentracao_concentrada * volume_inicial_mL) / volume_final_mL;

    agua_adicionada = volume_final_mL - volume_inicial_mL;

    printf("Concentracao Concentrada: C1 = %.3lf mol/L\n", concentracao_concentrada);
    printf("Concentracao Diluida: C2 = %.3lf mol/L\n", concentracao_diluida);
    printf("Agua Adicionada: %.3lf mL\n", agua_adicionada);

    return 0;
}