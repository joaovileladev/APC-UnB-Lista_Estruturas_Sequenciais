/*Em redes de computadores e servidores de arquivos, o tempo necessário para descarregar um arquivo digital depende do tamanho do arquivo em Gigabytes (GB), da taxa de transmissão contratada em Megabits por segundo (Mbps) e da eficiência média de empacotamento da rede (overhead de protocolos TCP/IP).

Fórmulas de conversão e cálculo:

Tamanho do arquivo em Megabytes: tamanho_mb = tamanho_gb * 1024.0;
Tamanho do arquivo em Megabits (considerando 1 Byte = 8 bits): tamanho_mbits = tamanho_mb * 8.0;
Taxa de transmissão real efetiva: velocidade_efetiva = taxa_contratada_mbps * (eficiencia_pct / 100.0) (em Mbps);
Tempo total de transferência em segundos: tempo_segundos = tamanho_mbits / velocidade_efetiva;
Tempo total de transferência em minutos: tempo_minutos = tempo_segundos / 60.0;
Taxa média de transferência em Megabytes por segundo (MB/s): taxa_mbytes_seg = tamanho_mb / tempo_segundos.
Entrada
A entrada consiste de 3 valores em ponto flutuante (double), lidos em linhas separadas:

Tamanho do arquivo em Gigabytes (GB);
Velocidade nominal do link em Megabits por segundo (Mbps);
Eficiência média da rede em porcentagem (ex: 85.0 para 85%).
Saída
Seu programa deve imprimir três linhas formatadas com 2 casas decimais:

Tempo Estimado: X.XX segundos (Y.YY minutos)
Taxa Efetiva de Download: Z.ZZ MB/s
Volume Transferido: W.WW Megabits

Por exemplo:

Input	Resultado
15.0
100.0
90.0
Tempo Estimado: 1365.33 segundos (22.76 minutos)
Taxa Efetiva de Download: 11.25 MB/s
Volume Transferido: 122880.00 Megabits
4.5
50.0
80.0
Tempo Estimado: 921.60 segundos (15.36 minutos)
Taxa Efetiva de Download: 5.00 MB/s
Volume Transferido: 36864.00 Megabits
50.0
300.0
92.0
Tempo Estimado: 1484.06 segundos (24.73 minutos)
Taxa Efetiva de Download: 34.50 MB/s
Volume Transferido: 409600.00 Megabits*/

#include <stdio.h>

int main() {
    double tamanho_arquivo_gb, velocidade_link_mbs, eficiencia_media_porcentagem;
    double tamanho_arquivo_mb, tamanho_arquivo_mbits;
    double velocidade_efetiva;
    double tempo_segundos, tempo_minutos;
    double taxa_mb_seg;

    scanf("%lf", &tamanho_arquivo_gb);
    scanf("%lf", &velocidade_link_mbs);
    scanf("%lf", &eficiencia_media_porcentagem);

    tamanho_arquivo_mb = tamanho_arquivo_gb * 1024.0;
    tamanho_arquivo_mbits = tamanho_arquivo_mb * 8.0;

    velocidade_efetiva = velocidade_link_mbs * (eficiencia_media_porcentagem / 100.0);

    tempo_segundos = tamanho_arquivo_mbits / velocidade_efetiva;
    tempo_minutos = tempo_segundos / 60.0;

    taxa_mb_seg = tamanho_arquivo_mb / tempo_segundos;

    printf("Tempo Estimado: %.2f segundos (%.2f minutos)\n", tempo_segundos, tempo_minutos);
    printf("Taxa Efetiva de Download: %.2f MB/s\n", taxa_mb_seg);
    printf("Volume Transferido: %.2f Megabits\n", tamanho_arquivo_mbits);

    return 0;
}