/*Em simulacoes balisticas, um projetil e lancado a partir do solo (y0 = 0, x0 = 0) com uma velocidade inicial v0 e um angulo de inclinacao theta em graus em relacao a horizontal sob acao da aceleracao gravitacional g.

O movimento decompoe-se em duas componentes ortogonais:

Horizontal (MRU): v0x = v0 * cos(theta_rad), onde theta_rad = theta * (PI / 180);
Vertical (MRUV): v0y = v0 * sin(theta_rad);
Tempo de subida ate o apice: t_subida = v0y / g;
Tempo total de voo: t_voo = 2 * t_subida;
Altura maxima atingida: H_max = (v0y * v0y) / (2 * g);
Alcance horizontal total: X_alcance = v0x * t_voo.
Considere PI = 3.141592653589793.

Entrada
A entrada consiste de 3 valores em ponto flutuante (double), lidos em linhas separadas:

Modulo da velocidade inicial v0 em m/s;
Angulo de disparo theta em graus;
Aceleracao da gravidade g em m/s2.
Saida
Seu programa deve imprimir quatro linhas formatadas com 3 casas decimais:

Componentes: V0x = VX.XXX m/s | V0y = VY.YYY m/s
Tempo de Voo: T.TTT s
Altura Maxima: H.HHH m
Alcance Horizontal: X.XXX m

Por exemplo:

Input	Resultado
50.0
45.0
9.81
Componentes: V0x = 35.355 m/s | V0y = 35.355 m/s
Tempo de Voo: 7.208 s
Altura Maxima: 63.710 m
Alcance Horizontal: 254.842 m
100.0
30.0
9.80
Componentes: V0x = 86.603 m/s | V0y = 50.000 m/s
Tempo de Voo: 10.204 s
Altura Maxima: 127.551 m
Alcance Horizontal: 883.699 m
75.0
60.0
9.81
Componentes: V0x = 37.500 m/s | V0y = 64.952 m/s
Tempo de Voo: 13.242 s
Altura Maxima: 215.023 m
Alcance Horizontal: 496.574 m*/

#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;

int main() {
    double initial_speed, launch_angle_deg, launch_angle_rad, gravity, horizontal_speed, vertical_speed, ascent_time, flight_time, max_height, horizontal_range;

    scanf(" %lf", &initial_speed);
    scanf(" %lf", &launch_angle_deg);
    scanf(" %lf", &gravity);

    launch_angle_rad = launch_angle_deg * pi / 180;
    horizontal_speed = initial_speed * cos(launch_angle_rad);
    vertical_speed = initial_speed * sin(launch_angle_rad);
    ascent_time = vertical_speed / gravity;
    flight_time = 2 * ascent_time;
    max_height = (vertical_speed * vertical_speed) / (2 * gravity);
    horizontal_range = horizontal_speed * flight_time;

    printf("Componentes: V0x = %.3lf m/s | V0y = %.3lf m/s\n", horizontal_speed, vertical_speed);
    printf("Tempo de Voo: %.3lf s\n", flight_time);
    printf("Altura Maxima: %.3lf m\n", max_height);
    printf("Alcance Horizontal: %.3lf m\n", horizontal_range);

    return 0;
}