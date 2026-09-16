/*Na hidraulica aplicada a redes de abastecimento, o dimensionamento do escoamento de um fluido incompressivel em um duto circular sob pressao e governado pela Equacao da Continuidade e pelo Numero de Reynolds.

Formulas aplicadas:

Diametro interno em metros: D = D_mm / 1000.0;
Area da secao transversal: Area = (PI * D * D) / 4.0;
Vazao volumetrica a partir de Litros por segundo (L/s): Q = Q_Lps / 1000.0 (em m3/s);
Velocidade media do escoamento: v = Q / Area;
Numero de Reynolds: Re = (v * D) / nu (onde nu e a viscosidade cinematica do fluido em m2/s);
Pressao dinamica do escoamento: P_din = 0.5 * rho * v * v (em Pascals, Pa, onde rho e a massa especifica em kg/m3).
Considere PI = 3.141592653589793.

Entrada
A entrada consiste de 5 valores em ponto flutuante (double), lidos em linhas separadas:

Diametro interno do tubo D_mm em milimetros;
Vazao Q_Lps em litros por segundo (L/s);
Massa especifica rho do fluido em kg/m3;
Viscosidade cinematica nu do fluido em m2/s (ex: 1.0e-6);
Comprimento da tubulacao L em metros.
Saida
Seu programa deve imprimir quatro linhas formatadas:

Velocidade Media: V.VVVV m/s (4 decimais)
Area da Secao: A.AAAAAA m2 (6 decimais)
Numero de Reynolds: RRRR.RR (2 decimais)
Pressao Dinamica: P.PP Pa (2 decimais)

Por exemplo:

Input	Resultado
50.0
5.0
1000.0
1.0e-6
20.0
Velocidade Media: 2.5465 m/s
Area da Secao: 0.001963 m2
Numero de Reynolds: 127323.95
Pressao Dinamica: 3242.28 Pa
100.0
15.0
1000.0
1.0e-6
50.0
Velocidade Media: 1.9099 m/s
Area da Secao: 0.007854 m2
Numero de Reynolds: 190985.93
Pressao Dinamica: 1823.78 Pa
25.0
1.2
998.0
1.004e-6
10.0
Velocidade Media: 2.4446 m/s
Area da Secao: 0.000491 m2
Numero de Reynolds: 60872.01
Pressao Dinamica: 2982.11 Pa*/

#include <stdio.h>

const double pi = 3.141592653589793;

int main() {
    double diametro_interno_mm, vazao_L_s, massa_especifica_kg_m3, viscosidade_cinematica_m2_s, comprimento_tubo_m;
    double velocidade_media, area_secao, numero_reynolds, pressao_dinamica;
    double diametro_interno_m, vazao_m3_s;

    scanf("%lf", &diametro_interno_mm);
    scanf("%lf", &vazao_L_s);
    scanf("%lf", &massa_especifica_kg_m3);
    scanf("%lf", &viscosidade_cinematica_m2_s);
    scanf("%lf", &comprimento_tubo_m);

    diametro_interno_m = diametro_interno_mm / 1000;
    area_secao = (pi * diametro_interno_m * diametro_interno_m) / 4;
    vazao_m3_s = vazao_L_s / 1000;
    velocidade_media = vazao_m3_s / area_secao;
    numero_reynolds = (velocidade_media * diametro_interno_m) / viscosidade_cinematica_m2_s;
    pressao_dinamica = 0.5 * massa_especifica_kg_m3 * velocidade_media * velocidade_media;

    printf("Velocidade Media: %.4lf m/s\n", velocidade_media);
    printf("Area da Secao: %.6lf m2\n", area_secao);
    printf("Numero de Reynolds: %.2lf\n", numero_reynolds);
    printf("Pressao Dinamica: %.2lf Pa\n", pressao_dinamica);

    return 0;
}