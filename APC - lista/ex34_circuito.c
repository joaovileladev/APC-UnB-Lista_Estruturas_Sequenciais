/*Em um circuito elétrico de corrente contínua, dois resistores de aquecimento (R1
 e R2
) estão associados em paralelo entre si, e esse conjunto está ligado em série a um terceiro resistor (R3
). O circuito completo é alimentado por uma fonte de tensão contínua V
.

Roteiro de Cálculos Sequenciais:

1. Resistência Equivalente do Paralelo (Rp
):
Rp=R1⋅R2R1+R2

2. Resistência Equivalente Total (Req
):
Soma da parte paralela com o resistor em série:
Req=Rp+R3

3. Corrente Total (Itot
) e Potência Dissipada (P
):
Itot=VReqeP=V⋅Itot

4. Energia Elétrica Consumida (EkWh
):
Conversão da potência em Watts para quilowatts multiplicada pelo tempo em horas:
EkWh=(P1000.0)⋅horas

Entrada
A entrada consiste de 5 valores em ponto flutuante (double), lidos em linhas separadas:

V: Tensão da fonte em Volts (V);
R1: Resistência do primeiro resistor em Ohms (Ω
);
R2: Resistência do segundo resistor em Ohms (Ω
);
R3: Resistência do terceiro resistor em Ohms (Ω
);
horas: Tempo de funcionamento contínuo em horas (h).
Saída
Seu programa deve imprimir exatamente quatro linhas formatadas em 2 casas decimais:

Resistencia Equivalente: Req = X.XX ohms
Corrente Total: Itot = Y.YY A
Potencia Dissipada: P = Z.ZZ W
Energia Consumida: E = W.WW kWh

Por exemplo:

Input	Resultado
120.0
60.0
40.0
16.0
5.0
Resistencia Equivalente: Req = 40.00 ohms
Corrente Total: Itot = 3.00 A
Potencia Dissipada: P = 360.00 W
Energia Consumida: E = 1.80 kWh
220.0
100.0
100.0
50.0
8.0
Resistencia Equivalente: Req = 100.00 ohms
Corrente Total: Itot = 2.20 A
Potencia Dissipada: P = 484.00 W
Energia Consumida: E = 3.87 kWh
12.0
20.0
30.0
8.0
24.0
Resistencia Equivalente: Req = 20.00 ohms
Corrente Total: Itot = 0.60 A
Potencia Dissipada: P = 7.20 W
Energia Consumida: E = 0.17 kWh*/

#include <stdio.h>

int main() {
    double tensao, R1, R2, R3, horas;
    double Req_total, corrente_total, potencia_dissipada, energia_consumida;
    double Req_paralelo;

    scanf("%lf", &tensao);
    scanf("%lf", &R1);
    scanf("%lf", &R2);
    scanf("%lf", &R3);
    scanf("%lf", &horas);

    Req_paralelo = (R1 * R2) / (R1 + R2);
    Req_total = Req_paralelo + R3;

    corrente_total = tensao / Req_total;

    potencia_dissipada = tensao * corrente_total;

    energia_consumida = (potencia_dissipada / 1000.0) * horas;

    printf("Resistencia Equivalente: Req = %.2lf ohms\n", Req_total);
    printf("Corrente Total: Itot = %.2lf A\n", corrente_total);
    printf("Potencia Dissipada: P = %.2lf W\n", potencia_dissipada);
    printf("Energia Consumida: E = %.2lf kWh\n", energia_consumida);

    return 0;
}