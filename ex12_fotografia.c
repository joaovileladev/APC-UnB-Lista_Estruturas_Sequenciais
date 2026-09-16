/*Na ciencia fotografica e sistemas de cameras digitais, a quantidade total de luz capturada pelo sensor e quantificada pela escala logaritmica de Valor de Exposicao (EV, Exposure Value).

Formulacao matematica:

O valor de exposicao base para ISO 100 e dado por: EV100 = log((N * N) / t) / log(2.0), onde N e o numero de abertura do diafragma (f-number) e t e o tempo de exposicao em segundos;
Para uma sensibilidade ISO arbitraria: EV_ISO = EV100 + (log(ISO / 100.0) / log(2.0));
A luminancia da cena correspondente em cd/m2 e: L = exp((EV_ISO - 3.0) * log(2.0));
A iluminancia estimada da cena em Lux e: E = 2.5 * exp(EV100 * log(2.0)).
Entrada
A entrada consiste de 3 valores em ponto flutuante (double), lidos em linhas separadas:

Numero de abertura do diafragma N (ex: 2.8, 4.0, 8.0);
Tempo de exposicao t em segundos (ex: 0.008 para 1/125s);
Sensibilidade ISO (ex: 100.0, 400.0, 1600.0).
Saida
Seu programa deve imprimir quatro linhas formatadas com 2 casas decimais:

Valor de Exposicao (EV100): EV100 = X.XX
Valor de Exposicao Ajustado: EV_ISO = Y.YY
Luminancia da Cena: L = Z.ZZ cd/m2
Iluminancia da Cena: E = W.WW lux

Por exemplo:

Input	Resultado
2.8
0.008
100.0
Valor de Exposicao (EV100): EV100 = 9.94
Valor de Exposicao Ajustado: EV_ISO = 9.94
Luminancia da Cena: L = 122.50 cd/m2
Iluminancia da Cena: E = 2450.00 lux
4.0
0.004
400.0
Valor de Exposicao (EV100): EV100 = 11.97
Valor de Exposicao Ajustado: EV_ISO = 13.97
Luminancia da Cena: L = 2000.00 cd/m2
Iluminancia da Cena: E = 10000.00 lux
8.0
0.002
100.0
Valor de Exposicao (EV100): EV100 = 14.97
Valor de Exposicao Ajustado: EV_ISO = 14.97
Luminancia da Cena: L = 4000.00 cd/m2
Iluminancia da Cena: E = 80000.00 lux*/

#include <stdio.h>
#include <math.h>

int main() {
    double f_number, exposure_time, ISO_sensitivity, exposure_value_ISO100, exposure_value_ISO, luminance, illuminance;

    scanf("%lf", &f_number);
    scanf("%lf", &exposure_time);
    scanf("%lf", &ISO_sensitivity);

    exposure_value_ISO100 = log((f_number * f_number) / exposure_time) / log(2.0);

    exposure_value_ISO = exposure_value_ISO100 + (log(ISO_sensitivity / 100.0) / log(2.0));

    luminance = exp((exposure_value_ISO - 3.0) * log(2.0));

    illuminance = 2.5 * exp(exposure_value_ISO100 * log(2.0));

    printf("Valor de Exposicao (EV100): EV100 = %.2lf\n", exposure_value_ISO100);
    printf("Valor de Exposicao Ajustado: EV_ISO = %.2lf\n", exposure_value_ISO);
    printf("Luminancia da Cena: L = %.2lf cd/m2\n", luminance);
    printf("Iluminancia da Cena: E = %.2lf lux\n", illuminance);

    return 0;
}