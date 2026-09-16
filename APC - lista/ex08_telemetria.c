#include <stdio.h>

int main () {
    int tempo_inicial, horas, minutos, segundos;
    float velocidade_media_km_h, velocidade_media_m_s, distancia_metros, distancia_quilometros;

    scanf("%d", &tempo_inicial);
    scanf("%f", &velocidade_media_km_h);

    horas = tempo_inicial / 3600;

    minutos = (tempo_inicial % 3600) / 60;

    segundos = (tempo_inicial % 3600) % 60;

    velocidade_media_m_s = velocidade_media_km_h / 3.6;

    distancia_metros = velocidade_media_m_s * tempo_inicial;

    distancia_quilometros = distancia_metros / 1000;

    printf("Tempo: %dh %dm %ds\n", horas, minutos, segundos);
    printf("Distancia: %.2f m (%.2f km)\n", distancia_metros, distancia_quilometros);

    return 0;
}