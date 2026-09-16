/*Na astrodinamica e engenharia aeroespacial, satelites artificiais em orbita circular ao redor da Terra tem sua velocidade tangencial e periodo de revolucao governados pela Lei da Gravitacao Universal de Newton e pela aceleracao centripeta.

Dados e constantes:

Massa da Terra: M = 5.972e24 kg;
Raio medio da Terra: R_T = 6371.0 km;
Constante de gravitacao universal: G = 6.67430e-11 N*m2/kg2;
Considere PI = 3.141592653589793.
Equacoes do movimento orbital:

Raio orbital em metros a partir do centro da Terra: r_m = (6371.0 + h) * 1000.0 (onde h e a altitude informada em km);
Velocidade orbital circular: v = sqrt((G * M) / r_m) em m/s;
Velocidade orbital em km/h: v_kmh = v * 3.6;
Periodo orbital em segundos: T_seg = (2.0 * PI * r_m) / v;
Periodo orbital em minutos: T_min = T_seg / 60.0;
Aceleracao da gravidade local na altitude h: g_h = (G * M) / (r_m * r_m) em m/s2.
Entrada
A entrada consiste de um unico numero em ponto flutuante (double) representando a altitude h do satelite em quilometros (km).

Saida
Seu programa deve imprimir tres linhas formatadas:

Velocidade Orbital: V.VV m/s (VKMH.KK km/h) (2 decimais)
Periodo Orbital: T.TT minutos (2 decimais)
Gravidade Local: G.GGGG m/s2 (4 decimais)

Por exemplo:

Input	Resultado
400.0
Velocidade Orbital: 7672.49 m/s (27620.97 km/h)
Periodo Orbital: 92.42 minutos
Gravidade Local: 8.6940 m/s2
550.0
Velocidade Orbital: 7588.89 m/s (27320.01 km/h)
Periodo Orbital: 95.50 minutos
Gravidade Local: 8.3212 m/s2
800.0
Velocidade Orbital: 7455.43 m/s (26839.56 km/h)
Periodo Orbital: 100.72 minutos
Gravidade Local: 7.7511 m/s2*/

#include <stdio.h>
#include <math.h>

const double earth_mass = 5.972e24;
const double earth_radius_km = 6371.0;
const double gravitational_constant = 6.67430e-11;
const double pi = 3.141592653589793;

int main () {
    double altitude_km, orbital_radius_m, circular_orbital_speed_ms, circular_orbital_speed_kmh, orbital_period_s, orbital_period_min, local_gravity_ms2;

    scanf("%lf", &altitude_km);

    orbital_radius_m = (6371.0 + altitude_km) * 1000.0;
    circular_orbital_speed_ms = sqrt((gravitational_constant * earth_mass) / orbital_radius_m);
    circular_orbital_speed_kmh = circular_orbital_speed_ms * 3.6;
    orbital_period_s = (2 * pi * orbital_radius_m) / circular_orbital_speed_ms;
    orbital_period_min = orbital_period_s / 60;
    local_gravity_ms2 = (gravitational_constant * earth_mass) / (orbital_radius_m * orbital_radius_m);

    printf("Velocidade Orbital: %.2lf m/s (%.2lf km/h)\n", circular_orbital_speed_ms, circular_orbital_speed_kmh);
    printf("Periodo Orbital: %.2lf minutos\n", orbital_period_min);
    printf("Gravidade Local: %.4lf m/s2\n", local_gravity_ms2);

    return 0;
}