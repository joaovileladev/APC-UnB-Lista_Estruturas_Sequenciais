/*No dimensionamento mecânico de eixos de transmissão de potência cilíndricos e maciços submetidos a um torque constante T
, a tensão de cisalhamento máxima na superfície externa e o ângulo de torção são governados pela teoria da torção elástica.

Roteiro de Cálculos Sequenciais:

1. Raio do Eixo (c
) e Momento Polar de Inércia (J
):
A partir do diâmetro dmm
 convertido para metros (d=dmm/1000.0
 e raio c=d/2.0
):
J=π⋅d432.0

2. Tensão Cisalhante Máxima (τmax
):
τPa=T⋅cJeτMPa=τPa106

3. Ângulo Total de Deformação por Torção (θrad
 e θgraus
):
Para um eixo de comprimento L
 com Módulo de Elasticidade Transversal G
 (em GPa, GPa=G×109
):
θrad=T⋅LGPa⋅Jeθgraus=θrad⋅(180.0π)

Considere π=3.141592653589793
.

Entrada
A entrada consiste de 5 valores em ponto flutuante (double), lidos em linhas separadas:

T: Torque aplicado em Newton-metros (N⋅m
);
d_mm: Diâmetro do eixo maciço em milímetros (mm);
L: Comprimento do eixo em metros (m);
G_GPa: Módulo de cisalhamento do material em Gigapascals (GPa).
Saída
Seu programa deve imprimir quatro linhas formatadas:

Momento Polar de Inercia: J = X.XXXXe-XX m4 (notação científica com 4 decimais, formato %.4e)
Tensao Cisalhante Maxima: Tau = Y.YY MPa (2 decimais)
Angulo de Torcao: Theta = Z.ZZZZ rad (4 decimais)
Angulo de Torcao em Graus: Theta = W.WW graus (2 decimais)

Por exemplo:

Input	Resultado
500.0
50.0
1.5
80.0
Momento Polar de Inercia: J = 6.1359e-07 m4
Tensao Cisalhante Maxima: Tau = 20.37 MPa
Angulo de Torcao: Theta = 0.0153 rad
Angulo de Torcao em Graus: Theta = 0.88 graus
1200.0
75.0
2.0
75.0
Momento Polar de Inercia: J = 3.1063e-06 m4
Tensao Cisalhante Maxima: Tau = 14.49 MPa
Angulo de Torcao: Theta = 0.0103 rad
Angulo de Torcao em Graus: Theta = 0.59 graus
250.0
35.0
1.0
82.0
Momento Polar de Inercia: J = 1.4732e-07 m4
Tensao Cisalhante Maxima: Tau = 29.70 MPa
Angulo de Torcao: Theta = 0.0207 rad
Angulo de Torcao em Graus: Theta = 1.19 graus*/

#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;

int main() {
    double torque_Nm, diametro_mm, diametro_m, comprimento_m, cisalhamento_modulo_GPa, raio_eixo, momento_polar_inercia_J, tensao_cisalhante, tensao_cisalhante_maxima, angulo_torcao_rad, angulo_torcao_graus;

    scanf(" %lf", &torque_Nm);
    scanf(" %lf", &diametro_mm);
    scanf(" %lf", &comprimento_m);
    scanf(" %lf", &cisalhamento_modulo_GPa);

    diametro_m = diametro_mm /1000;
    raio_eixo = diametro_m / 2;
    momento_polar_inercia_J = pi * pow(diametro_m, 4) / 32;
    tensao_cisalhante = torque_Nm * raio_eixo / momento_polar_inercia_J;
    tensao_cisalhante_maxima = tensao_cisalhante / 1e6;
    angulo_torcao_rad = (torque_Nm * comprimento_m) / (cisalhamento_modulo_GPa* 1e9 * momento_polar_inercia_J);
    angulo_torcao_graus = angulo_torcao_rad * (180 / pi);

    printf("Momento Polar de Inercia: J = %.4e m4\n", momento_polar_inercia_J);
    printf("Tensao Cisalhante Maxima: Tau = %.2lf MPa\n", tensao_cisalhante_maxima);
    printf("Angulo de Torcao: Theta = %.4lf rad\n", angulo_torcao_rad);
    printf("Angulo de Torcao em Graus: Theta = %.2lf graus\n", angulo_torcao_graus);

    return 0;
}