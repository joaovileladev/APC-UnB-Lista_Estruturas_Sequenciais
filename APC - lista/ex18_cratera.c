/*Em uma simulação física de lançamento balístico em terreno plano e sem resistência do ar, um projétil é disparado a partir da origem com velocidade inicial v0 (m/s) e ângulo de elevação theta (em graus). Adote aceleração da gravidade g = 9.81 m/s² e pi = 3.141592653589793.

As equações da trajetória são dadas por:
- Ângulo em radianos: theta_rad = theta * (pi / 180.0)
- Tempo de voo: T = (2.0 * v0 * sin(theta_rad)) / g
- Alcance horizontal: X = v0 * cos(theta_rad) * T
- Altura máxima: Z_max = (v0 * sin(theta_rad))^2 / (2.0 * g)

No ponto de queda, o impacto forma uma cratera com perfil de calota esférica de raio de base r (m) e profundidade h (m), cujo volume é dado por:
Volume = (pi * h / 6.0) * (3.0 * r^2 + h^2)

Entrada
A entrada consiste de quatro valores reais (double), representando respectivamente v0, theta (em graus), r e h.

Saída
Imprima exatamente quatro linhas com os resultados formatados com 4 casas decimais:

Tempo de voo: T s
Alcance horizontal: X m
Altura maxima: Z m
Volume da cratera: V m3
Por exemplo:

Input	Resultado
150.0
45.0
3.5
1.2
Tempo de voo: 21.6241 s
Alcance horizontal: 2293.5780 m
Altura maxima: 573.3945 m
Volume da cratera: 23.9955 m3
*/

#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;
const double gravity =  9.81;

int main() {
    double initial_speed, angle_deg, radius, depth;
    double angle_rad;
    double flight_time, horizontal_range, max_height, crater_volume;

    scanf(" %lf", &initial_speed);
    scanf(" %lf", &angle_deg);
    scanf(" %lf", &radius);
    scanf(" %lf", &depth);

    angle_rad = angle_deg * pi / 180;

    flight_time = (2 * initial_speed * sin(angle_rad)) / gravity;
    horizontal_range = initial_speed * cos(angle_rad) * flight_time;
    max_height = pow((initial_speed * sin(angle_rad)), 2) / (2 * gravity);
    crater_volume = (pi * depth / 6) * (3 * pow(radius, 2) + pow(depth, 2));

    printf("Tempo de voo: %.4lf s\n", flight_time);
    printf("Alcance horizontal: %.4lf m\n", horizontal_range);
    printf("Altura maxima: %.4lf m\n", max_height);
    printf("Volume da cratera: %.4lf m3\n", crater_volume);

    return 0;
}