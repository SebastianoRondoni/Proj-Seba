#include<stdio.h>
#include"gamelib.h"
#include<stdlib.h>
#include<time.h>

//qui andrà il menu e l'inizializzazione delle variabili globali

int main(){
    time_t t;
    srand((unsigned) time(&t));

    int scelta = 0;
    do {
        switch (scelta)
        {
        case 1: //imposta gioco
            imposta_gioco(); //funzione che crea la mappa e i giocatori
            break;
        case 2: //gioca
            gioca(); //funzione che fa partire la partita
            break;
        case 3: //termina gioco
            termina_gioco(); //funzione che ripulisce la memoria prima di chiudere l'eseguibile
            scelta = -1;
            break;
        }
    }while (scelta != -1);
    

    return 0;
}