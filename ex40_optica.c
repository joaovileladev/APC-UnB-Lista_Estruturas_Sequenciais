/*Na óptica geométrica, a formação de imagens em lentes delgadas convergentes e espelhos esféricos é determinada pela Equação dos Pontos Conjugados de Gauss e pela Ampliação Linear.

Roteiro de Cálculos Sequenciais:

1. Posição da Imagem (p′
):
Obtida isolando p′
 na Equação de Gauss (1f=1p+1p′
):
p′=f⋅pp−f

2. Aumento Linear Transversal (A
):
Razão entre as distâncias da imagem e do objeto com sinal invertido:
A=−p′p

3. Tamanho da Imagem Formada (i
):
Produto entre o aumento linear e a altura do objeto:
i=A⋅o

Entrada
A entrada consiste de 3 números em ponto flutuante (double), lidos em linhas separadas:

f: Distância focal da lente em centímetros (cm);
p: Distância do objeto até a lente em centímetros (cm, com p>f
);
o: Altura do objeto em centímetros (cm).
Saída
Seu programa deve imprimir exatamente três linhas com valores formatados em 2 casas decimais:

Posicao da Imagem: p_linha = X.XX cm
Aumento Linear: A = Y.YY
Tamanho da Imagem: i = Z.ZZ cm

Por exemplo:

Input	Resultado
20.0
30.0
5.0
Posicao da Imagem: p_linha = 60.00 cm
Aumento Linear: A = -2.00
Tamanho da Imagem: i = -10.00 cm
10.0
25.0
4.0
Posicao da Imagem: p_linha = 16.67 cm
Aumento Linear: A = -0.67
Tamanho da Imagem: i = -2.67 cm
15.0
45.0
6.0
Posicao da Imagem: p_linha = 22.50 cm
Aumento Linear: A = -0.50
Tamanho da Imagem: i = -3.00 cm*/

#include <stdio.h>

int main() {
    double distancia_focal_cm, distancia_obj_cm, altura_cm;
    double posicao_imagem, aumento_linear, tamanho_imagem;

    scanf("%lf", &distancia_focal_cm);
    scanf("%lf", &distancia_obj_cm);
    scanf("%lf", &altura_cm);

    posicao_imagem = (distancia_focal_cm * distancia_obj_cm) / (distancia_obj_cm - distancia_focal_cm);

    aumento_linear = (-1) * (posicao_imagem / distancia_obj_cm);

    tamanho_imagem = aumento_linear * altura_cm;

    printf("Posicao da Imagem: p_linha = %.2lf cm\n", posicao_imagem);
    printf("Aumento Linear: A = %.2lf\n", aumento_linear);
    printf("Tamanho da Imagem: i = %.2lf cm\n", tamanho_imagem);

    return 0;
}