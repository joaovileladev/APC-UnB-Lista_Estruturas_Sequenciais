#include <stdio.h>

const double velocidade_luz = 299792.458;

int main () {
    double angulo_paralaxe, lambda_obs, lambda_0, distancia_parsecs, distancia_estelar, distancia_km, desvio_doppler, velocidade_radial;

    scanf("%lf", &angulo_paralaxe);
    scanf("%lf", &lambda_obs);
    scanf("%lf", &lambda_0);

    distancia_parsecs = 1 / angulo_paralaxe;

    distancia_estelar = distancia_parsecs * 3.26156;

    distancia_km = distancia_parsecs * 3.0857e13;

    desvio_doppler = (lambda_obs - lambda_0) / lambda_0;

    velocidade_radial = desvio_doppler * velocidade_luz;

    printf("Distancia Estelar: D = %.2lf pc (%.2lf anos-luz)\n", distancia_parsecs, distancia_estelar);
    printf("Distancia em km: D = %.4e km\n", distancia_km);
    printf("Desvio Doppler: z = %.6lf\n", desvio_doppler);
    printf("Velocidade Radial: Vrad = %.2lf km/s\n", velocidade_radial);

    return 0;
}