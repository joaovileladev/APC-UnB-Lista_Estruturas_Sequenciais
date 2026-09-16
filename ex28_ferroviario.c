/*Na engenharia ferroviaria e estrutural, trilhos de aco sofrem dilatacao termica linear decorrente da variacao climatica de temperatura. Se as extremidades forem fixadas rigidamente sem junta de dilatacao, o impedimento da expansao gera uma tensao mecanica compressiva interna regida pela Lei de Hooke e pelo Modulo de Elasticidade de Young.

Formulacao matematica:

Variacao de temperatura: delta_T = T_final - T_inicial em graus Celsius;
Dilatacao linear livre: delta_L = L0 * alpha * delta_T em metros;
Deformacao termica relativa: eps = alpha * delta_T;
Tensao mecanica induzida no trilho fixo: sigma_Pa = E * eps em Pascals;
Tensao em MegaPascals: sigma_MPa = sigma_Pa / 1.0e6;
Forca compressiva total suportada pelo trilho: forca_N = sigma_Pa * (area_cm2 / 10000.0);
Forca convertida em quilonewtons: forca_kN = forca_N / 1000.0.
Entrada
A entrada consiste de 6 valores lidos em linhas separadas:

Comprimento inicial do trilho L0 em metros (double);
Temperatura inicial T_inicial em graus Celsius (double);
Temperatura final T_final em graus Celsius (double);
Coeficiente de dilatacao linear alpha em C^-1 (double, ex: 1.2e-5);
Modulo de Young E em Pascals (double, ex: 2.0e11);
Area da secao transversal do trilho em cm2 (double).
Saida
Seu programa deve imprimir quatro linhas formatadas:

Variacao de Comprimento Livre: DL = X.XXXXX m (5 decimais)
Deformacao Relativa: EPS = E.EEEEEE (6 decimais)
Tensao Termica Interna: S.SS MPa (2 decimais)
Forca Compressiva Total: F.FF kN (2 decimais)*/

#include <stdio.h>
#include <math.h>

int main() {
    double comprimento_inicial_m, temperatura_inicial_celsius, temperatura_final_celsius, alpha, modulo_young, area_secao_cm2;    //alpha = Coeficiente de dilatacao linear em C^-1;
    double variacao_comprimento, deformacao_relativa, tensao_termica_interna_MPa, forca_compressiva_KN;
    double variacao_temperatura, tensao_termica_Pa, forca_compressiva_N;

    scanf("%lf", &comprimento_inicial_m);
    scanf("%lf", &temperatura_inicial_celsius);
    scanf("%lf", &temperatura_final_celsius);
    scanf("%lf", &alpha);
    scanf("%lf", &modulo_young);
    scanf("%lf", &area_secao_cm2);

    variacao_temperatura = temperatura_final_celsius - temperatura_inicial_celsius;
    variacao_comprimento = comprimento_inicial_m * alpha * variacao_temperatura;
    deformacao_relativa = alpha * variacao_temperatura;
    tensao_termica_Pa = modulo_young * deformacao_relativa;
    tensao_termica_interna_MPa = tensao_termica_Pa / 1.e6;
    forca_compressiva_N = tensao_termica_Pa * (area_secao_cm2 / 10000);
    forca_compressiva_KN = forca_compressiva_N / 1000;

    printf("Variacao de Comprimento Livre: DL = %.5lf m\n", variacao_comprimento);
    printf("Deformacao Relativa: EPS = %.6lf\n", deformacao_relativa);
    printf("Tensao Termica Interna: %.2lf MPa\n", tensao_termica_interna_MPa);
    printf("Forca Compressiva Total: %.2lf kN\n", forca_compressiva_KN);

    return 0;
}