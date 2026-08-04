/*
 * File: distributoreMerendine.c
 * Prelevare ripetutamente merendine da un distributore finché si ha credito residuo.
 */
#include <stdio.h>

int main(void) {
    float credito, costoMerendina;

    printf("Quanto credito c’e’ sulla chiavetta? ");
    scanf("%f", &credito);

    printf("Inserisci il prezzo di una merendina: ");
    scanf("%f", &costoMerendina);

    while (credito >= costoMerendina) {
        credito -= costoMerendina;
        printf("Credito residuo: %.2f Euro\n", credito);
    }

    return 0;
}