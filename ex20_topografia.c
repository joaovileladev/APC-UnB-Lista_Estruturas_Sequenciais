/*Na topografia e engenharia de agrimensura, uma estacao total localizada na origem do levantamento cartografico P0(0,0) faz a visada de duas referencias de nivel distantes P1(x1, y1) e P2(x2, y2) para determinar grandezas topograficas fundamentais de projeto.

O programa deve calcular de forma estritamente sequencial:

A distancia euclidiana da origem ate cada ponto: d1 = sqrt(x1 * x1 + y1 * y1) e d2 = sqrt(x2 * x2 + y2 * y2);
A distancia direta entre os dois marcos P1 e P2: d12 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
O produto escalar entre os dois vetores de posicao: pe = (x1 * x2) + (y1 * y2);
O cosseno do angulo entre os dois alinhamentos: cos_alpha = pe / (d1 * d2);
O angulo de deflexao em graus: alpha_graus = acos(cos_alpha) * (180.0 / PI);
A area do triangulo topografico formado pelos vertices (0,0), P1 e P2 atraves do produto vetorial: Area = sqrt((x1 * y2 - x2 * y1) * (x1 * y2 - x2 * y1)) / 2.0.
Considere PI = 3.141592653589793.

Entrada
A entrada consiste de 4 valores em ponto flutuante (double), lidos em linhas separadas:

Coordenada x1 do ponto 1 em metros;
Coordenada y1 do ponto 1 em metros;
Coordenada x2 do ponto 2 em metros;
Coordenada y2 do ponto 2 em metros.
Saida
Seu programa deve imprimir quatro linhas formatadas com 3 casas decimais:

Distancias da Origem: D1 = X.XXX m | D2 = Y.YYY m
Distancia entre Pontos: D12 = Z.ZZZ m
Angulo de Deflexao: A.AAA graus
Area do Levantamento: S.SSS m2

Por exemplo:

Input	Resultado
100.0
0.0
0.0
100.0
Distancias da Origem: D1 = 100.000 m | D2 = 100.000 m
Distancia entre Pontos: D12 = 141.421 m
Angulo de Deflexao: 90.000 graus
Area do Levantamento: 5000.000 m2
50.0
50.0
100.0
0.0
Distancias da Origem: D1 = 70.711 m | D2 = 100.000 m
Distancia entre Pontos: D12 = 70.711 m
Angulo de Deflexao: 45.000 graus
Area do Levantamento: 2500.000 m2
30.0
40.0
-40.0
30.0
Distancias da Origem: D1 = 50.000 m | D2 = 50.000 m
Distancia entre Pontos: D12 = 70.711 m
Angulo de Deflexao: 90.000 graus
Area do Levantamento: 1250.000 m2*/

#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;

int main() {
    double x1, y1, x2, y2;
    double produto_escalar, cos_alpha;
    double distancia_origem_1, distancia_origem_2, distancia_pontos, angulo_deflexao, area_levantamento;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    distancia_origem_1 = sqrt(x1*x1 + y1*y1);
    distancia_origem_2 = sqrt(x2*x2 + y2*y2);
    distancia_pontos = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    produto_escalar = (x1 * x2) + (y1 * y2);
    cos_alpha = produto_escalar / (distancia_origem_1 * distancia_origem_2);
    angulo_deflexao = acos(cos_alpha) * (180.0 / pi);
    area_levantamento = sqrt((x1 * y2 - x2 * y1) * (x1 * y2 - x2 * y1)) / 2.0;

    printf("Distancias da Origem: D1 = %.3lf m | D2 = %.3lf m\n", distancia_origem_1, distancia_origem_2);
    printf("Distancia entre Pontos: D12 = %.3lf m\n", distancia_pontos);
    printf("Angulo de Deflexao: %.3lf graus\n", angulo_deflexao);
    printf("Area do Levantamento: %.3lf m2\n", area_levantamento);

    return 0;
}