/*
 * File: minVocalePercCifre.c
 * Data una sequenza di caratteri alfanumerici maiuscoli che termina col
 * carattere #, mostrare la vocale più piccola e calcolare la percentuale di
 * cifre.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char c; // Carattere immesso
    char min; // Vocale maiuscola più piccola
    float percCifre = 0.0f;
    int numCar = 0; // Numero di caratteri alfanumerici
    int numCifre = 0; // Numero di cifre
    bool trovata = false; // Indica se è stata trovata una vocale maiuscola

    // Chiedo il primo carattere
    printf("Immettere un carattere alfanumerico, # per terminare\t");
    scanf("%c", &c);
    while (getchar() != '\n');

    // Finché posso procedere
    while (c != '#') {
        // Controllo se il carattere è una cifra
        if (c >= '0' && c <= '9') {
            numCar++; // Ho trovato un carattere accettabile
            numCifre++; // Ho trovato una cifra in più
        } else if (c >= 'A' && c <= 'Z') {
            numCar++; // Ho trovato un carattere accettabile
            // Guardo se è una vocale
            switch (c) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    if (!trovata || c < min) {
                        trovata = true;
                        min = c;
                    }
            }
        }
        
        // Chiedo il carattere successivo
        printf("Immettere un carattere alfanumerico, # per terminare\t");
        scanf("%c", &c);
        while (getchar() != '\n');
    }

    // Se la vocale minima esiste, la mostro
    if (trovata) {
        printf("\nLa vocale maiuscola più piccola e' %c", min);
    } else {
        printf("\nNon sono state inserite vocali maiuscole");
    }

    // Calcolo la percentuale di cifre
    if (numCar > 0) {
        percCifre = 100.0f * numCifre / numCar;
        // trucco per non usare il casting esplicito, sarebbe lo stesso fare
        // percCifre = (float) numCifre / numCar * 100;
    }

    printf("\nLa percentuale di cifre e' dello %.2f%%", percCifre);
    return 0;
}