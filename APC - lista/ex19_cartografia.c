/*Em um sistema de computação gráfica e cartografia, é necessário calcular as propriedades métricas e geométricas de uma região triangular definida por três vértices não colineares no plano cartesiano $A(x_1, y_1)$, $B(x_2, y_2)$ e $C(x_3, y_3)$. O programa deve calcular o perímetro do triângulo, o semiperímetro, a área pela Fórmula de Heron ($Area = \sqrt{s(s-a)(s-b)(s-c)}$), as coordenadas do Baricentro $G(x_g, y_g) = (\rac{x_1+x_2+x_3}{3}, \rac{y_1+y_2+y_3}{3})$ e o raio do círculo circunscrito $R = \rac{a \cdot b \cdot c}{4 \cdot Area}$.

Entrada
A entrada consiste de 6 valores em ponto flutuante (double), lidos em linhas separadas, representando as coordenadas dos vértices:
$x_1$, $y_1$, $x_2$, $y_2$, $x_3$, $y_3$.

Saída
Seu programa deve imprimir quatro linhas formatadas com 3 casas decimais:

Perimetro: X.XXX | Area: Y.YYY
Baricentro: (GX.XXX, GY.YYY)
Raio Circunscrito: R.RRR

Por exemplo:

Input	Resultado
0.0
0.0
4.0
0.0
0.0
3.0
Perimetro: 12.000 | Area: 6.000
Baricentro: (1.333, 1.000)
Raio Circunscrito: 2.500
1.0
1.0
7.0
1.0
4.0
5.0
Perimetro: 16.000 | Area: 12.000
Baricentro: (4.000, 2.333)
Raio Circunscrito: 3.125
0.0
0.0
6.0
0.0
3.0
5.196152
Perimetro: 18.000 | Area: 15.588
Baricentro: (3.000, 1.732)
Raio Circunscrito: 3.464*/

#include <stdio.h>
#include <math.h>

double formula_distancia_pontos(double a, double b,double c, double d) {
    return sqrt(pow((c - a), 2) + pow((d - b), 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    double lado_a, lado_b, lado_c;
    double semiperimetro;
    double perimetro, area, baricentro_x, baricentro_y, raio_circunscrito;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    scanf("%lf", &x3);
    scanf("%lf", &y3);

    lado_a = formula_distancia_pontos(x1, y1, x2, y2);
    lado_b = formula_distancia_pontos(x2, y2, x3, y3);
    lado_c = formula_distancia_pontos(x1, y1, x3, y3);

    perimetro = lado_a + lado_b + lado_c;
    semiperimetro = perimetro / 2;
    area = sqrt(semiperimetro * (semiperimetro - lado_a) * (semiperimetro - lado_b) * (semiperimetro - lado_c));

    baricentro_x = (x1 + x2 + x3) / 3;
    baricentro_y = (y1 + y2 + y3) / 3;

    raio_circunscrito = lado_a * lado_b * lado_c / (4 * area);

    printf("Perimetro: %.3lf | Area: %.3lf\n", perimetro, area);
    printf("Baricentro: (%.3lf, %.3lf)\n", baricentro_x, baricentro_y);
    printf("Raio Circunscrito: %.3lf\n", raio_circunscrito);

    return 0;
}