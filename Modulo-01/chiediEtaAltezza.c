/*
 * File: chiediEtaAltezza.c
 * Uso della funzione scanf per leggere dati in input
 */

#include <stdio.h>

int main(void) {
    int eta;
    float altezza;
    
    printf("Quanti anni hai? ");
    scanf("%d", &eta);
    
    printf("Quanto sei alto, in metri? ");
    scanf("%f", &altezza);
    
    printf("Hai %d anni e sei alto %f metri.\n", eta, altezza);
    
    return 0;
}