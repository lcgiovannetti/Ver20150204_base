#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int massimo(int valori[], int n);
float media(int valori[], int n);
float divisione(int dividendo, int divisore);
int quoziente(int dividendo, int divisore);
int restoDivisione(int dividendo, int divisore);
float parteDecimaleDivisione(int dividendo, int divisore);

int main(int argc, char** argv) {
    int v[SIZE];
    int mas;
    float med;
    float div;
    int quo;
    int res;
    float pd;
    int i;
    
    printf("Inserisci %d valori interi POSITIVI\n", SIZE);
    // inserisci il codice necessario all'inserimento dei valori nell'array v
    for(i=0;i<SIZE;i++){
    scanf("%d",&v[i]);    
    }
    
    
    mas = massimo(v, SIZE);
    med = media(v, SIZE);
    div = divisione(v[0], v[1]);
    quo = quoziente(v[0], v[1]);
    res = restoDivisione(v[0], v[1]);
    pd = parteDecimaleDivisione(v[0], v[1]);
    
    printf("\nIl valore massimo è: %d\n", mas);
    printf("Il valore medio è: %f\n", med);
    
    printf("\nDivisione tra %d (dividendo) e %d (divisore)\n", v[0], v[1]);
    printf("Risultato (decimale): %f\n", div);
    printf("Parte decimale: %f\n", pd);
    printf("Quoziente (intero): %d\n", quo);
    printf("Resto (intero): %d\n", res);
    
    return (EXIT_SUCCESS);
}

/*
 * Calcola il valore massimo presente nell'array di valori interi POSITIVI, di dimensione n.
 */
int massimo(int valori[], int n) { //FATTO
    int max=0;
    int i;
    for(i=0;i<n;i++){
        if(max<valori[i])max=valori[i];
    }
    // TODO Implementa il codice della funzione
    return max;
}

/*
 * Calcola la media dei valori interi POSITIVI nell'array, di dimensione n.
 */
float media(int valori[], int n) { //FATTO
    float s,med;
    int i;
    s=0;
    med=0;
    for(i=0;i<n;i++){
        s=s+valori[i];
    }
    med=s/n;
    // TODO Implementa il codice della funzione
    return med;
}

/*
 * Calcola il risultato decimale della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2.5
 */
float divisione(int dividendo, int divisore) { //FATTO
    
    float div=0;
    div=(float)dividendo/divisore;
    // TODO Implementa il codice della funzione
    return div;
}

/*
 * Calcola il quoziente (parte intera) della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int quoziente(int dividendo, int divisore) {
    int quoz=0;
    quoz=dividendo/divisore;
    return quoz;
}

/*
 * Calcola il resto della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int restoDivisione(int dividendo, int divisore) { //FATTO
    int resto;
    resto=dividendo % divisore;
    
    // TODO Implementa il codice della funzione
    return resto;
}

/*
 * Calcola la parte decimale del risultato della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 0.5
 * La parte decimale è, ovviamente, sempre inferiore a 1.
 */
float parteDecimaleDivisione(int dividendo, int divisore) {
    float partedec;
    float div=0;
    div=(float)dividendo/divisore;
    int quoz=0;
    quoz=dividendo/divisore;
    partedec=div-quoz;
    
    // TODO Implementa il codice della funzione 
    return partedec;
}

