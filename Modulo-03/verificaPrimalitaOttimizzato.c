/*
 * File: verificaPrimalitaOttimizzato.c
 * Verifica della primalità di un numero intero N positivo. Terza versione
 * Divisioni per i numeri da 2 a √N. Se trovo un divisore, il numero non è primo
 * e interrompo la verifica
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n; // Numero intero positivo
    int i; // Variabile di controllo del ciclo while
    bool primo; // Flag per la risposta

    // Chiedo N
    do {
        printf("Quale numero intero positivo vuoi verificare? ");
        scanf("%d", &n);
        while (getchar() != '\n'); // Pulizia del buffer
    } while (n <= 0);

    if (n == 1) {
        primo = false;
    } else {
        primo = true;
        i = 2;

        // Il ciclo prosegue finche' i * i <= n E non è stato trovato alcun divisore
        while (i * i <= n && primo) {
            if (n % i == 0) { // Se trovo un divisore
                primo = false; // Cambio il flag, quindi il ciclo termina
            } else {
                i++;
            }
        }
    }

    if (primo) {
        printf("Il numero %d e' primo", n);
    } else {
        printf("Il numero %d non e' primo", n);
    }

    return 0;
}