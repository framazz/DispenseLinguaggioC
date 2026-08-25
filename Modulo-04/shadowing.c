#include <stdio.h>

// Definizione delle variabili intere globali a e b
int a = -1, b = 100;

int main(void) {
    printf("01 - Valori di a e b nel main prima della loro ridefinizione "
        "(shadowing)\nVedo le variabili globali\n");
    printf("a: %d   b: %d\n", a, b);

    a = 12; // Modifico la variabile globale
    printf("02 - Valori di a e b nel main prima della loro ridefinizione "
        "(shadowing)\nVedo le variabili globali, dopo la modifica di a\n");
    printf("a: %d   b: %d\n", a, b);

    // Definisco le variabili intere a e b dentro il main --> vanno a
    // nascondere quelle globali (shadowing)
    int a = 5, b = 4;
    printf("03 - Valori di a e b nel main dopo la loro ridefinizione (shadowing)"
        "\nVedo i valori locali al main\n");
    printf("a: %d   b: %d\n", a, b);

    if (a != b) {
        int a = 0, b = 0, c = 0;
        printf("04 - Valori di a e b dentro il blocco if del main dopo ulteriore"
               " shadowing\n Vedo i valori locali al blocco if\n");
        printf("a: %d, b: %d, c: %d\n", a, b, c);
    } else {
        // l'istruzione seguente dà un errore di compilazione, la variabile c
        // non è definita in questo punto del codice perché si limita al ramo if
        // printf ("a: %d, b: %d, c: %d", a, b, c);

        printf("Valori di a e b dentro il main dopo lo shadowing\n"
               "Vedo le variabili locali\n");
        printf("a: %d, b: %d\n", a, b);
    }

    return 0;
}