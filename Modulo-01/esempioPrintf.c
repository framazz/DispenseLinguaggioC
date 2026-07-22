/*
 * File: esempioPrintf
 * Mostrare l'uso degli specificatori di formato per valori numerici
 */
#include <stdio.h>

int main(void) {
    int eta = 15;
    float altezza = 1.75f;
    double numero = 1234.567;
    printf("Ho %d anni e sono alto %f metri.\n", eta, altezza);
    printf("La mia eta' in esadecimale vale: %x\n", eta);
    printf("Il numero 1234.56 viene stampato come\n");
    printf("In virgola mobile:\t\t\t%f\n", numero);
    printf("In notazione esponenziale: \t%e\n", numero);

    return 0;
}