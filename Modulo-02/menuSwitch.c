/*
 * File: menuSwitch.c
 * Mostrare l'uso dello switch-case con un menu a scelta intera
 */
#include <stdio.h>

int main(void) {
    int scelta = 0;      // Memorizza la scelta dell'utente
    int numero = 0;      // Il numero inserito per i calcoli
    int risultato = 0;   // Memorizza il risultato ottenuto
    int retVal = 0;      // Valore di ritorno del main

    // 1. Lettura del numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    // 2. Visualizzazione del mini menu
    printf("=== FUNZIONI MATEMATICHE ===\n");
    printf("1. Calcola il quadrato\n");
    printf("2. Calcola il cubo\n");
    printf("3. Verifica se il numero e' pari\n");
    printf("============================\n");
    printf("Inserisci la tua scelta [1-3]: ");
    scanf("%d", &scelta);

    // 3. Gestione della scelta tramite il costrutto switch
    switch (scelta) {
        case 1:
            printf("\nHai scelto: Calcola il quadrato.\n");
            risultato = numero * numero;
            printf("Il quadrato di %d e' %d.\n", numero, risultato);
            break; // Impedisce di passare al case 2
        case 2:
            printf("\nHai scelto: Calcola il cubo.\n");
            risultato = numero * numero * numero;
            printf("Il cubo di %d e' %d.\n", numero, risultato);
            break; // Impedisce di passare al case 3
        case 3:
            printf("\nHai scelto: Verifica parita'.\n");
            // Ricordiamo: il C valuta 0 come falso e 1 (o non-zero) come vero
            if (numero % 2 == 0) {
                printf("Il numero %d e' PARI.\n", numero);
            } else {
                printf("Il numero %d e' DISPARI.\n", numero);
            }
            break; // Impedisce di passare al case 4
        default:
            // Questo blocco scatta se l'utente digita un numero != da 1, 2 o 3
            printf("\nErrore: Scelta [%d] non valida.\n", scelta);
            retVal = 1;
            break;
    }

    return retVal;
}