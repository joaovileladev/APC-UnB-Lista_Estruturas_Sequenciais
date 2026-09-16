#include <stdio.h>
#include <math.h>

const double pi = 3.141592653589793;
const double limiarAudicao =  1.0e-12;

int main () {
    double potenciaSonora, distancia, areaEsfera, intensidadeSonora1, intensidadeSonora2, pressaoSonora1, pressaoSonora2, atenuacaoDobroRaio;

    scanf("%lf", &potenciaSonora);
    scanf("%lf", &distancia);

    areaEsfera = 4 * pi * distancia * distancia;

    intensidadeSonora1 = potenciaSonora / areaEsfera;

    pressaoSonora1 = 10 * log10(intensidadeSonora1 / limiarAudicao);

    distancia *= 2;

    intensidadeSonora2 = intensidadeSonora1 / 4;

    pressaoSonora2 = 10 * log10(intensidadeSonora2 / limiarAudicao);

    atenuacaoDobroRaio = pressaoSonora1 - pressaoSonora2;

    printf("Intensidade Sonora: I = %.4e W/m2\n", intensidadeSonora1);
    printf("Nivel de Pressao Sonora: L1 = %.2lf dB\n", pressaoSonora1);
    printf("Nivel a 2x da Distancia: L2 = %.2lf dB\n", pressaoSonora2);
    printf("Atenuacao no Dobro do Raio: %.2lf dB\n", atenuacaoDobroRaio);
    
    return 0;
}