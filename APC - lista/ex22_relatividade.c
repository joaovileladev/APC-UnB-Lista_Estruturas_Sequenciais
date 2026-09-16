/*Na fisica moderna, quando uma particula com massa de repouso m0 se desloca no vacuo com uma velocidade ultra-relativistica v expressa como uma fracao beta da velocidade da luz (v = beta * c, com 0 < beta < 1), os efeitos descritos pela Relatividade Restrita de Albert Einstein tornam-se predominantes.

Constantes fundamentais:

Velocidade da luz no vacuo: c = 2.99792458e8 m/s;
Equivalente de energia: 1 MeV = 1.602176634e-13 Joules.
Formulacoes relativisticas:

Fator de Lorentz: gamma = 1.0 / sqrt(1.0 - (beta * beta));
Dilatacao temporal: t_lab_us = (gamma * (t0_us * 1.0e-6)) * 1.0e6 (em microssegundos);
Contracao de Lorentz: L_contraido = L0 / gamma (em metros);
Momento linear relativistico: p = gamma * m0 * (beta * c) (em kg*m/s);
Energia de repouso: E0 = m0 * c * c (em Joules);
Energia cinetica relativistica: K = (gamma - 1.0) * E0 (em Joules);
Energia total relativistica: E_total_J = gamma * E0 (em Joules);
Energia total em Megaeletron-volts: E_total_MeV = E_total_J / 1.602176634e-13.
Entrada
A entrada consiste de 4 valores em ponto flutuante (double), lidos em linhas separadas:

Massa de repouso da particula m0 em kg;
Fracao da velocidade da luz beta (0 < beta < 1);
Comprimento proprio de referencia L0 em metros;
Tempo proprio de vida t0 em microssegundos (us).
Saida
Seu programa deve imprimir quatro linhas formatadas:

Fator de Lorentz: GAMMA = G.GGGG (4 decimais)
Dilatacao Temporal: T_lab = T.TTTT us | Comprimento Contraido: L = L.LLLL m (4 decimais)
Momento Relativistico: P = P.PPPPe-XX kg.m/s (notacao cientifica com 4 decimais, formato %.4e)
Energia Cinetica: K = K.KKKKe-XX J | Energia Total: E = E.EE MeV (energia K em %.4e e energia E em %.2f)

Por exemplo:

Input	Resultado
1.67262e-27
0.80
10.0
2.20
Fator de Lorentz: GAMMA = 1.6667
Dilatacao Temporal: T_lab = 3.6667 us | Comprimento Contraido: L = 6.0000 m
Momento Relativistico: P = 6.6859e-19 kg.m/s
Energia Cinetica: K = 1.0022e-10 J | Energia Total: 1563.79 MeV
9.10938e-31
0.95
1.0
0.50
Fator de Lorentz: GAMMA = 3.2026
Dilatacao Temporal: T_lab = 1.6013 us | Comprimento Contraido: L = 0.3122 m
Momento Relativistico: P = 8.3087e-22 kg.m/s
Energia Cinetica: K = 1.8033e-13 J | Energia Total: 1.64 MeV
1.67262e-27
0.99
50.0
1.50
Fator de Lorentz: GAMMA = 7.0888
Dilatacao Temporal: T_lab = 10.6332 us | Comprimento Contraido: L = 7.0534 m
Momento Relativistico: P = 3.5191e-18 kg.m/s
Energia Cinetica: K = 9.1532e-10 J | Energia Total: 6651.23 MeV*/

#include <stdio.h>
#include <math.h>

const double c = 2.99792458e8;  //c = velocidade da luz no vacuo;
const double equivalente_de_energia = 1.602176634e-13;

int main () {
    double massa_particula_kg, beta, comprimento_referencia_m, tempo_vida_us;  //beta = fração da velocidade da luz | 0 < beta < 1;
    double gamma, dilatacao_temporal, momento_relativistico, energia_cinetica, energia_total_J;  //gamma = fator de Lorentz;
    double comprimento_contraido, energia_repouso, energia_total_MeV;


    scanf("%lf", &massa_particula_kg);
    scanf("%lf", &beta);
    scanf("%lf", &comprimento_referencia_m);
    scanf("%lf", &tempo_vida_us);

    gamma = 1.0 / sqrt(1.0 - (beta * beta));
    dilatacao_temporal = (gamma * (tempo_vida_us * 1.0e-6)) * 1.0e6;  //em microssegundos;
    comprimento_contraido = comprimento_referencia_m / gamma;  //em metros;
    momento_relativistico = gamma * massa_particula_kg * (beta * c);  //em kg*m/s
    energia_repouso = massa_particula_kg * c * c;  //em Joules;
    energia_cinetica = (gamma - 1.0) * energia_repouso;  //em Joules;
    energia_total_J = gamma * energia_repouso; //em Joules;
    energia_total_MeV = energia_total_J / equivalente_de_energia;

    printf("Fator de Lorentz: GAMMA = %.4lf\n", gamma);
    printf("Dilatacao Temporal: T_lab = %.4lf us | Comprimento Contraido: L = %.4lf m\n", dilatacao_temporal, comprimento_contraido);
    printf("Momento Relativistico: P = %.4e kg.m/s\n", momento_relativistico);
    printf("Energia Cinetica: K = %.4e J | Energia Total: %.2lf MeV\n", energia_cinetica, energia_total_MeV);

    return 0;
}