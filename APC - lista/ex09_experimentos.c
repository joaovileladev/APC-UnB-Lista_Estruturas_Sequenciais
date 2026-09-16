#include <stdio.h>

int main () {
    int tempo_total, dias, horas, minutos, segundos;

    scanf("%d", &tempo_total);

    dias = tempo_total / 86400;
    horas = (tempo_total % 86400) / 3600;
    minutos = ((tempo_total % 86400) % 3600) / 60;
    segundos = ((tempo_total % 86400) % 3600) % 60;

    printf("DURACAO: %d dia(s), %d hora(s), %d minuto(s) e %d segundo(s)", dias, horas, minutos, segundos);

    return 0;
}