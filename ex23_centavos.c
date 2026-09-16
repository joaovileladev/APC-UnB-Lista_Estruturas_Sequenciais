/*Um terminal de autoatendimento bancário precisa decompor um valor em centavos na menor quantidade de cédulas e moedas disponíveis: cédulas de R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e moedas de R$ 1 (100 centavos) e R$ 0.50 (50 centavos). O saldo restante de centavos menor que 50 centavos permanece retido como resíduo.

O algoritmo deve calcular as quantidades por meio de divisões inteiras sucessivas e operações de resto (módulo), sem a necessidade de comandos de desvio ou repetição.

Entrada
A entrada consiste de um único número inteiro representando a quantia total em centavos.

Saída
Imprima exatamente as seguintes 8 linhas:

Notas de 50: A
Notas de 20: B
Notas de 10: C
Notas de 5: D
Notas de 2: E
Moedas de 1 real: F
Moedas de 50 centavos: G
Residuo: H centavos
Por exemplo:

Input	Resultado
18785
Notas de 50: 3
Notas de 20: 1
Notas de 10: 1
Notas de 5: 1
Notas de 2: 1
Moedas de 1 real: 0
Moedas de 50 centavos: 1
Residuo: 35 centavos*/

#include <stdio.h>

int main() {
    int valor_total;  //em centavos;
    int notas50, notas20, notas10, notas5, notas2, moedas1, moedas50, residuo;
    int restante;

    scanf("%d", &valor_total);

    restante = valor_total;

    notas50 = restante / 5000;
    restante = restante % 5000;

    notas20 = restante / 2000;
    restante = restante % 2000;

    notas10 = restante / 1000;
    restante = restante % 1000;

    notas5 = restante / 500;
    restante = restante % 500;

    notas2 = restante / 200;
    restante = restante % 200;

    moedas1 = restante / 100;
    restante = restante % 100;

    moedas50 = restante / 50;
    restante = restante % 50;

    residuo = restante;
    
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Moedas de 1 real: %d\n", moedas1);
    printf("Moedas de 50 centavos: %d\n", moedas50);
    printf("Residuo: %d centavos\n", residuo);

    return 0;
}