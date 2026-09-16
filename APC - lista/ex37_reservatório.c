/*Na engenharia hidráulica, a pressão no fundo de um reservatório cilíndrico aberto à atmosfera é a soma da pressão atmosférica com a pressão hidrostática exercida pela coluna de líquido (Teorema de Stevin).

Roteiro de Cálculos Sequenciais:

1. Área da Base Cilíndrica (A
):
A partir do raio da base r
 em metros:
A=π⋅r2

2. Pressão Hidrostática Relativa (Phidro
):
Phidro=ρ⋅g⋅h

3. Pressão Absoluta Total no Fundo (Ptotal
):
Ptotal=Patm+Phidro

4. Força Total Exercida sobre o Fundo (Ftotal
):
Ftotal=Ptotal⋅AeFkN=Ftotal1000.0

Considere π=3.141592653589793
 e Patm=101325.0 Pa
.

Entrada
A entrada consiste de 4 valores em ponto flutuante (double), lidos em linhas separadas:

r: Raio da base do reservatório em metros (m);
h: Altura da coluna de líquido em metros (m);
rho: Massa específica do fluido em kg/m³;
g: Aceleração da gravidade em m/s².
Saída
Seu programa deve imprimir exatamente quatro linhas formatadas em 2 casas decimais:

Area da Base: A = X.XX m2
Pressao Hidrostatica: Phidro = Y.YY Pa
Pressao Total no Fundo: Ptot = Z.ZZ Pa
Forca Total no Fundo: F = W.WW kN

Por exemplo:

Input	Resultado
2.0
5.0
1000.0
9.80
Area da Base: A = 12.57 m2
Pressao Hidrostatica: Phidro = 49000.00 Pa
Pressao Total no Fundo: Ptot = 150325.00 Pa
Forca Total no Fundo: F = 1889.04 kN
1.5
3.0
1000.0
9.81
Area da Base: A = 7.07 m2
Pressao Hidrostatica: Phidro = 29430.00 Pa
Pressao Total no Fundo: Ptot = 130755.00 Pa
Forca Total no Fundo: F = 924.25 kN
3.0
8.0
900.0
9.80
Area da Base: A = 28.27 m2
Pressao Hidrostatica: Phidro = 70560.00 Pa
Pressao Total no Fundo: Ptot = 171885.00 Pa
Forca Total no Fundo: F = 4859.93 kN*/

#include <stdio.h>

const double pi = 3.141592653589793;

const double pressao_atm = 101325.0;

int main() {
    double raio_base, altura_coluna, massa_especifica, gravidade;
    double area_base, pressao_hidrostatica, pressao_total_fundo, forca_total_fundo_N;
    double forca_total_fundo_KN;

    scanf("%lf", &raio_base);
    scanf("%lf", &altura_coluna);
    scanf("%lf", &massa_especifica);
    scanf("%lf", &gravidade);

    area_base = pi * raio_base * raio_base;

    pressao_hidrostatica = massa_especifica * gravidade * altura_coluna;

    pressao_total_fundo = pressao_atm + pressao_hidrostatica;

    forca_total_fundo_N = pressao_total_fundo * area_base;
    forca_total_fundo_KN = forca_total_fundo_N / 1000.0;

    printf("Area da Base: A = %.2lf m2\n", area_base);
    printf("Pressao Hidrostatica: Phidro = %.2lf Pa\n", pressao_hidrostatica);
    printf("Pressao Total no Fundo: Ptot = %.2lf Pa\n", pressao_total_fundo);
    printf("Forca Total no Fundo: F = %.2lf kN\n", forca_total_fundo_KN);

    return 0;
}