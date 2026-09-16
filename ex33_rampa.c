/*Na mecânica clássica, um corpo de massa m
 repousa sobre uma rampa inclinada sem atrito que forma um ângulo θ
 (em graus) com a linha horizontal, sujeito à gravidade g
.

Roteiro de Cálculos Sequenciais:

1. Conversão Angular para Radianos (θrad
):
θrad=θ⋅(π180.0)

2. Força Peso Total (P
):
P=m⋅g

3. Decomposição Vetorial da Força Peso (Px
 e Py
):
Componente paralela à rampa (Px
) e componente perpendicular à superfície (Py
):
Px=P⋅sin(θrad)ePy=P⋅cos(θrad)

4. Aceleração Resultante ao Longo da Rampa (a
):
a=g⋅sin(θrad)

Considere π=3.141592653589793
.

Entrada
A entrada consiste de 3 valores em ponto flutuante (double), lidos em linhas separadas:

m: Massa do corpo em quilogramas (kg);
theta: Ângulo de inclinação da rampa em graus (°);
g: Aceleração da gravidade local em m/s².
Saída
Seu programa deve imprimir exatamente quatro linhas formatadas em 2 casas decimais:

Peso Total: P = X.XX N
Componente Tangencial (Px): Y.YY N
Componente Normal (Py): Z.ZZ N
Aceleracao na Rampa: a = W.WW m/s2

Por exemplo:

Input	Resultado
10.0
30.0
9.80
Peso Total: P = 98.00 N
Componente Tangencial (Px): 49.00 N
Componente Normal (Py): 84.87 N
Aceleracao na Rampa: a = 4.90 m/s2
25.0
45.0
9.81
Peso Total: P = 245.25 N
Componente Tangencial (Px): 173.42 N
Componente Normal (Py): 173.42 N
Aceleracao na Rampa: a = 6.94 m/s2
5.0
60.0
9.80
Peso Total: P = 49.00 N
Componente Tangencial (Px): 42.44 N
Componente Normal (Py): 24.50 N
Aceleracao na Rampa: a = 8.49 m/s2
*/

#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;

int main() {
    double massa, theta_graus, gravidade;
    double forca_peso, componente_tangencial, componente_normal, aceleracao_resultante;
    double theta_rad;

    scanf("%lf", &massa);
    scanf("%lf", &theta_graus);
    scanf("%lf", &gravidade);

    theta_rad = theta_graus * (pi / 180);
    forca_peso = massa * gravidade; 
    componente_tangencial = forca_peso * sin(theta_rad);
    componente_normal = forca_peso * cos(theta_rad);
    aceleracao_resultante = gravidade * sin(theta_rad);

    printf("Peso Total: P = %.2lf N\n", forca_peso);
    printf("Componente Tangencial (Px): %.2lf N\n", componente_tangencial);
    printf("Componente Normal (Py): %.2lf N\n", componente_normal);
    printf("Aceleracao na Rampa: a = %.2lf m/s2\n", aceleracao_resultante);

    return 0;
}