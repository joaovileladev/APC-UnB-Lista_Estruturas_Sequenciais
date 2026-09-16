/*Uma sonda espacial registrou a duração total de uma manobra de correção orbital expressa unicamente em segundos inteiros. Para gerar o relatório de missão, você deve decompor esse total de segundos em semanas, dias, horas, minutos e segundos restantes, utilizando apenas operações aritméticas inteiras de divisão e resto (módulo %).

Considere as seguintes equivalências:

1 semana = 7 dias
1 dia = 24 horas
1 hora = 60 minutos
1 minuto = 60 segundos
Entrada
A entrada consiste de um único número inteiro positivo representando o tempo total em segundos.

Saída
Seu programa deve imprimir o resultado exatamente no seguinte formato:
X semana(s), Y dia(s), Z hora(s), W minuto(s) e K segundo(s)

Por exemplo:

Input	Resultado
700000
1 semana(s), 1 dia(s), 2 hora(s), 26 minuto(s) e 40 segundo(s)*/

#include <stdio.h>

int main() {
    int tempo_total;    //em segundos;
    int semanas, dias, horas, minutos, segundos;
    int restante;

    scanf("%d", &tempo_total);

    semanas = tempo_total / 604800;   //7 * 24 * 60 * 60 = 604.800
    restante = tempo_total % 604800;

    dias = restante / 86400;
    restante = restante % 86400;

    horas = restante / 3600;
    restante = restante % 3600;

    minutos = restante / 60;

    segundos = restante % 60;

    printf("%d semana(s), %d dia(s), %d hora(s), %d minuto(s) e %d segundo(s)\n", semanas, dias, horas, minutos, segundos);

    return 0;
}