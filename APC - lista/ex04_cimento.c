#include <stdio.h>
 int main () {
    double volumeTotal, parteAreia, parteBrita, fatorAguaCimento, massaTotal, massaCimento, massaAreia, massaBrita, volumeAgua;

    scanf("%lf", &volumeTotal);
    scanf("%lf", &parteAreia);
    scanf("%lf", &parteBrita);
    scanf("%lf", &fatorAguaCimento);

    massaTotal = volumeTotal * 2400;

    massaCimento = massaTotal / (1 + parteAreia + parteBrita + fatorAguaCimento);

    massaAreia = massaCimento * parteAreia;

    massaBrita = massaCimento * parteBrita;

    volumeAgua = massaCimento * fatorAguaCimento;

    printf("Cimento: %.2lf kg\n", massaCimento);
    printf("Areia: %.2lf kg\n", massaAreia);
    printf("Brita: %.2lf kg\n", massaBrita);
    printf("Agua: %.2lf Litros\n", volumeAgua);

    return 0;
 }