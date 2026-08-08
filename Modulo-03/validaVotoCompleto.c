/*
 * File: validaVotoCompleto.c
 * Validazione di un voto su scala decimale con modalità completa
 */

#include <stdio.h>

int main() {
    int voto; // Il voto da validare
    int esitoLettura; // Valore di ritorno della scanf
    int carattere; // Il carattere per pulire il buffer
    int ok; // Flag per capire se la validazione è andata a buon fine

    do {
        ok = 1; // Suppongo tutto ok
        // Istruzioni sul dato che si chiede
        printf("Inserisci un numero intero compreso tra 1 e 10: ");

        // Lettura del dato
        esitoLettura = scanf("%d", &voto);

        if (esitoLettura != 1) { // Se la lettura è fallita
            ok = 0;
            printf("Errore: devi inserire un numero intero.\n");
        } else if (voto < 1 || voto > 10) { // Lettura ok ma dato non conforme
            ok = 0;
            printf("Errore: il numero deve essere compreso tra 1 e 10.\n");
        }
        // Pulizia del buffer: in ogni caso!
        while ((carattere = getchar()) != '\n' && carattere != EOF);
    } while (ok == 0);

    printf("Valore valido: %d\n", voto);

    return 0;
}