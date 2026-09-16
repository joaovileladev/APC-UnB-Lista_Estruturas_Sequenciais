#include <stdio.h>

double velocidade_resultante(double a, double b) {
    return a - b;
}

double distancia_resultante(double a, double b) {
    return b - a;
}

int main () {
    double posicao_inicial_A, velocidade_A;
    double posicao_inicial_B, velocidade_B;
    double velocidade_relativa, distancia_inicial;
    double posicao_encontro, instante_de_encontro, tempo_horas, tempo_minutos;

    scanf("%lf", &posicao_inicial_A);
    scanf("%lf", &velocidade_A);
    scanf("%lf", &posicao_inicial_B);
    scanf("%lf", &velocidade_B);

    velocidade_relativa = velocidade_resultante(velocidade_A, velocidade_B);

    distancia_inicial = distancia_resultante(posicao_inicial_A, posicao_inicial_B);

    instante_de_encontro = distancia_inicial / velocidade_relativa;

    posicao_encontro = (velocidade_A * instante_de_encontro) + posicao_inicial_A;

    tempo_horas = instante_de_encontro;

    tempo_minutos = instante_de_encontro * 60;

    printf("Tempo de encontro: %.2lf horas\n", tempo_horas);
    printf("Tempo de encontro: %.2lf minutos\n", tempo_minutos);
    printf("Posicao de encontro: Marco KM %.2lf\n", posicao_encontro);

    return 0;
}