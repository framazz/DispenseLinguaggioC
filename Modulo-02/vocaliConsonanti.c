/*
 * File: vocaliConsonanti.c
 * Data una lettera minuscola, stabilire se è una vocale o una consonante
 */
#include <stdio.h>

int main(void) {
    int retVal = 0; // Valore di ritorno
    char lettera; // Variabile char per la lettera immessa

    // Chiedo la lettera
    printf("Inserire una lettera minuscola: ");
    scanf(" %c", &lettera);

    // Controllo che sia una minuscola
    if (lettera >= 'a' && lettera <= 'z') {
        // Controllo se è vocale o consonante
        switch (lettera) {
            case 'a': // No break perché devo fare la stessa cosa
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("La lettera %c e' una vocale.\n", lettera);
                break;
            default:
                printf("La lettera %c e' una consonante.\n", lettera);
        }
    } else {
        printf("Il carattere %c non e' una lettera minuscola.\n", lettera);
        retVal = 1;
    }

    return retVal;
}