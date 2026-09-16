/*Na aerodinâmica veicular, a resistência do ar oposta ao avanço de um automóvel em linha reta em velocidade constante v
 determina a Força de Arrasto Aerodinâmico (Fd
) e a potência mecânica consumida exclusivamente para vencer o ar.

Roteiro de Cálculos Sequenciais:

1. Conversão de Velocidade para m/s (vms
):
vms=vkmh3.6

2. Força de Arrasto Aerodinâmico (Fd
):
Fd=12⋅ρar⋅(vms)2⋅Cd⋅A

3. Potência Aerodinâmica Dissipada em Watts (Pwatts
):
Pwatts=Fd⋅vms

4. Potência em Cavalos-Vapor (Pcv
):
Considerando 1 cv=735.5 W
:
Pcv=Pwatts735.5

Considere a massa específica do ar como ρar=1.225 kg/m3
.

Entrada
A entrada consiste de 3 valores em ponto flutuante (double), lidos em linhas separadas:

v_kmh: Velocidade do veículo em km/h;
cd: Coeficiente de arrasto aerodinâmico (adimensional);
area: Área frontal projetada do veículo em m².
Saída
Seu programa deve imprimir exatamente quatro linhas formatadas em 2 casas decimais:

Velocidade em m/s: v = X.XX m/s
Forca de Arrasto: Fd = Y.YY N
Potencia Dissipada: P = Z.ZZ W
Potencia em Cavalos-Vapor: P = W.WW cv

Por exemplo:

Input	Resultado
100.0
0.30
2.20
Velocidade em m/s: v = 27.78 m/s
Forca de Arrasto: Fd = 311.92 N
Potencia Dissipada: P = 8664.48 W
Potencia em Cavalos-Vapor: P = 11.78 cv
120.0
0.28
2.10
Velocidade em m/s: v = 33.33 m/s
Forca de Arrasto: Fd = 400.17 N
Potencia Dissipada: P = 13338.89 W
Potencia em Cavalos-Vapor: P = 18.14 cv
80.0
0.32
2.40
Velocidade em m/s: v = 22.22 m/s
Forca de Arrasto: Fd = 232.30 N
Potencia Dissipada: P = 5162.14 W
Potencia em Cavalos-Vapor: P = 7.02 cv
*/

#include <stdio.h>

const double p_ar = 1.225;    //p_ar = massa especifica do ar em kg/m3;

int main() {
    double velocidade_km_h, coeficiente_arrasto, area_frontal_m2;
    double velocidade_m_s, forca_arrasto, potencia_dissipada, potencia_cv;

    scanf("%lf", &velocidade_km_h);
    scanf("%lf", &coeficiente_arrasto);
    scanf("%lf", &area_frontal_m2);

    velocidade_m_s = velocidade_km_h / 3.6;

    forca_arrasto = (1.0 / 2.0) * p_ar * velocidade_m_s * velocidade_m_s * coeficiente_arrasto * area_frontal_m2;

    potencia_dissipada = forca_arrasto * velocidade_m_s;

    potencia_cv = potencia_dissipada / 735.5;

    printf("Velocidade em m/s: v = %.2lf m/s\n", velocidade_m_s);
    printf("Forca de Arrasto: Fd = %.2lf N\n", forca_arrasto);
    printf("Potencia Dissipada: P = %.2lf W\n", potencia_dissipada);
    printf("Potencia em Cavalos-Vapor: P = %.2lf cv\n", potencia_cv);

    return 0;
}