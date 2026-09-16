/*Na eletrotecnica e analise de circuitos de corrente alternada (CA), um circuito composto por um resistor (R), um indutor (L) e um capacitor (C) ligados em serie e alimentado por uma tensao senoidal com valor eficaz V_rms e frequencia f em Hertz (Hz).

As grandezas eletricas e fasoriais fundamentais sao:

Frequencia angular da rede: omega = 2.0 * PI * f (rad/s);
Capacitancia convertida para Farads: C_F = C_uF * 1.0e-6;
Reatancia indutiva: XL = omega * L (ohms);
Reatancia capacitiva: XC = 1.0 / (omega * C_F) (ohms);
Reatancia liquida total: X_tot = XL - XC;
Impedancia total do circuito: Z = sqrt(R * R + X_tot * X_tot) (ohms);
Corrente eletrica eficaz: I_rms = V_rms / Z (A);
Fator de potencia: FP = R / Z;
Angulo de defasagem em graus: theta_deg = atan(X_tot / R) * (180.0 / PI);
Potencia aparente: S_VA = V_rms * I_rms (VA);
Potencia ativa dissipada: P_W = S_VA * FP (W).
Considere PI = 3.141592653589793.

Entrada
A entrada consiste de 5 valores em ponto flutuante (double), lidos em linhas separadas:

Tensao eficaz V_rms em Volts;
Frequencia da rede f em Hertz;
Resistencia R em Ohms;
Indutancia L em Henrys;
Capacitancia C em microfarads (uF).
Saida
Seu programa deve imprimir quatro linhas formatadas:

Reatancias: XL = A.AA ohms | XC = B.BB ohms (2 decimais)
Impedancia Total: Z = Z.ZZ ohms (2 decimais)
Corrente Eficaz: I = I.III A | Defasagem: D.DD graus (3 decimais na corrente e 2 no angulo)
Potencia Ativa: P.PP W | Potencia Aparente: S.SS VA (2 decimais)

Por exemplo:

Input	Resultado
220.0
60.0
30.0
0.15
45.0
Reatancias: XL = 56.55 ohms | XC = 58.95 ohms
Impedancia Total: Z = 30.10 ohms
Corrente Eficaz: I = 7.310 A | Defasagem: -4.57 graus
Potencia Ativa: 1603.09 W | Potencia Aparente: 1608.21 VA
127.0
60.0
20.0
0.08
100.0
Reatancias: XL = 30.16 ohms | XC = 26.53 ohms
Impedancia Total: Z = 20.33 ohms
Corrente Eficaz: I = 6.248 A | Defasagem: 10.30 graus
Potencia Ativa: 780.68 W | Potencia Aparente: 793.46 VA
220.0
50.0
40.0
0.25
30.0
Reatancias: XL = 78.54 ohms | XC = 106.10 ohms
Impedancia Total: Z = 48.58 ohms
Corrente Eficaz: I = 4.529 A | Defasagem: -34.57 graus
Potencia Ativa: 820.43 W | Potencia Aparente: 996.35 VA
*/

#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;

int main() {
    double tensao_eficaz_Volts, frequencia_rede_Hz, resistencia_Ohm, indutancia_Henrys, capacitancia_uF;
    double reatancia_indutiva, reatancia_capacitiva, impedancia_total, corrente_eficaz, angulo_defasagem, potencia_ativa, potencia_aparente;
    double omega, capacitancia_F, reatancia_total, fator_de_potencia;    //omega = frequencia angular da rede;

    scanf("%lf", &tensao_eficaz_Volts);
    scanf("%lf", &frequencia_rede_Hz);
    scanf("%lf", &resistencia_Ohm);
    scanf("%lf", &indutancia_Henrys);
    scanf("%lf", &capacitancia_uF);

    omega = 2 * pi * frequencia_rede_Hz;
    capacitancia_F = capacitancia_uF * 1e-6;
    reatancia_indutiva = omega * indutancia_Henrys;
    reatancia_capacitiva = 1 / (omega * capacitancia_F);
    reatancia_total = reatancia_indutiva - reatancia_capacitiva;
    impedancia_total = sqrt(resistencia_Ohm * resistencia_Ohm + reatancia_total * reatancia_total);
    corrente_eficaz = tensao_eficaz_Volts / impedancia_total;
    fator_de_potencia = resistencia_Ohm / impedancia_total;
    angulo_defasagem = atan(reatancia_total / resistencia_Ohm) * (180/pi);
    potencia_aparente = tensao_eficaz_Volts * corrente_eficaz;
    potencia_ativa = potencia_aparente * fator_de_potencia;

    printf("Reatancias: XL = %.2lf ohms | XC = %.2lf ohms\n", reatancia_indutiva, reatancia_capacitiva);
    printf("Impedancia Total: Z = %.2lf ohms\n", impedancia_total);
    printf("Corrente Eficaz: I = %.3lf A | Defasagem: %.2lf graus\n", corrente_eficaz, angulo_defasagem);
    printf("Potencia Ativa: %.2lf W | Potencia Aparente: %.2lf VA\n", potencia_ativa, potencia_aparente);

    return 0;
}