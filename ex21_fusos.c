/*Um voo intercontinental parte de uma cidade de origem às h_partida horas e m_partida minutos. A duração estimada da viagem é de exatamente d_minutos minutos. Adicionalmente, há uma diferença de fuso horário fuso (em horas inteiras, podendo variar de 0 a 23 horas de avanço) entre a cidade de destino e a cidade de partida.

Utilizando unicamente aritmética inteira linear e operadores de resto (módulo %), seu programa deve calcular:

O total de dias adicionais decorridos durante o trajeto (quantas viradas de meia-noite ocorreram no relógio do destino).
O horário local de pouso na cidade de destino, expresso em horas (0 a 23) e minutos (0 a 59).
A duração total da viagem formatada em horas e minutos.
Entrada
A entrada consiste de quatro números inteiros lidos em linhas separadas:

h_partida: hora de partida no local de origem (0 a 23).
m_partida: minuto de partida no local de origem (0 a 59).
d_minutos: duração total do voo em minutos (inteiro positivo).
fuso: avanço de fuso horário da cidade de destino em horas inteiras (inteiro não negativo).
Saída
Seu programa deve imprimir três linhas formatadas:

Duracao: H h M min
Horario de pouso: HH:MM (as horas e minutos com dois dígitos, preenchidos com zero à esquerda se necessário: %02d:%02d)
Dias decorridos: D dia(s)
Por exemplo:

Input	Resultado
22
45
750
5
Duracao: 12 h 30 min
Horario de pouso: 16:15
Dias decorridos: 1 dia(s)
*/

#include <stdio.h>

int main() {
    int hora_partida, min_partida, duracao_total_voo_min, fuso;
    int instante_partida_em_minutos;
    int duracao_voo_hora, duracao_voo_min, pouso_hora, pouso_min, dias_decorridos;

    scanf("%d", &hora_partida);
    scanf("%d", &min_partida);
    scanf("%d", &duracao_total_voo_min);
    scanf("%d", &fuso);
    
    duracao_voo_hora = duracao_total_voo_min / 60;
    duracao_voo_min = duracao_total_voo_min % 60;

    instante_partida_em_minutos = (hora_partida * 60) + min_partida + (fuso * 60);
    dias_decorridos = (instante_partida_em_minutos + duracao_total_voo_min) / 1440;
    
    pouso_hora = (instante_partida_em_minutos + duracao_total_voo_min) % 1440 / 60;
    pouso_min = (instante_partida_em_minutos + duracao_total_voo_min) % 1440 % 60;
    

    printf("Duracao: %d h %d min\n", duracao_voo_hora, duracao_voo_min);
    printf("Horario de pouso: %02d:%02d\n", pouso_hora, pouso_min);
    printf("Dias decorridos: %d dia(s)\n", dias_decorridos);
    
    return 0;
}