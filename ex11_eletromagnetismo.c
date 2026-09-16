/*Dois corpos pontuais eletrizados com cargas q1 e q2 (em microcoulombs, uC) encontram-se separados por uma distancia d (em centimetros) no vacuo. Sabe-se que a constante eletrostatica no vacuo e k0 = 8.98755e9 N*m2/C2.

As conversoes e equacoes aplicadas sao:

q1_coulombs = q1 * 1.0e-6;
q2_coulombs = q2 * 1.0e-6;
distancia_metros = d / 100.0;
Forca de interacao eletrostatica no vacuo: F_vacuo = (k0 * q1_coulombs * q2_coulombs) / (distancia_metros * distancia_metros);
Forca em meio dieletrico: F_meio = F_vacuo / kappa;
Campo eletrico E1 no ponto da carga 2: E1 = (k0 * q1_coulombs) / (distancia_metros * distancia_metros).
Entrada
A entrada consiste de 4 valores em ponto flutuante (double), lidos em linhas separadas:

Modulo da carga q1 em microcoulombs (uC);
Modulo da carga q2 em microcoulombs (uC);
Distancia d entre as cargas em centimetros (cm);
Constante dieletrica relativa do meio (kappa).
Saida
Seu programa deve imprimir tres linhas formatadas com 4 casas decimais:

Forca no Vacuo: X.XXXX N
Forca no Meio Dieletrico: Y.YYYY N
Campo Eletrico E1: Z.ZZZZ N/C

Por exemplo:

Input	Resultado
3.0     Forca no Vacuo: 13.4813 N
5.0     Forca no Meio Dieletrico: 5.3925 N
10.0    Campo Eletrico E1: 2696265.0000 N/C
2.5

1.5
2.0
5.0
1.8
Forca no Vacuo: 10.7851 N
Forca no Meio Dieletrico: 5.9917 N
Campo Eletrico E1: 5392530.0000 N/C
10.0
10.0
20.0
4.0
Forca no Vacuo: 22.4689 N
Forca no Meio Dieletrico: 5.6172 N
Campo Eletrico E1: 2246887.5000 N/C*/

#include <stdio.h>

const double k = 8.98755e9;

double forca_eletrica_vacuo_formula(double a, double b, double c) {
    return (k * a * b) / (c * c);
}

double campo_eletrico_formula(double a, double b) {
    return (k * a) / (b * b);
}

int main () {
    double carga_q1_uC, carga_q1_C, carga_q2_uC, carga_q2_C, distancia_cm, distancia_m, constante_dieletrica_do_meio, forca_vacuo, forca_meio_dieletrico, campo_eletrico;

    scanf("%lf", &carga_q1_uC);
    scanf("%lf", &carga_q2_uC);
    scanf("%lf", &distancia_cm);
    scanf("%lf", &constante_dieletrica_do_meio);

    carga_q1_C = carga_q1_uC * 1e-6;
    carga_q2_C = carga_q2_uC * 1e-6;
    distancia_m = distancia_cm / 100;

    forca_vacuo = forca_eletrica_vacuo_formula(carga_q1_C, carga_q2_C, distancia_m);
    forca_meio_dieletrico = forca_vacuo / constante_dieletrica_do_meio;
    campo_eletrico = campo_eletrico_formula(carga_q1_C, distancia_m);

    printf("Forca no Vacuo: %.4lf N\n", forca_vacuo);
    printf("Forca no Meio Dieletrico: %.4lf N\n", forca_meio_dieletrico);
    printf("Campo Eletrico E1: %.4lf N/C\n", campo_eletrico);

    return 0;
}