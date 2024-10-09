#include <stdio.h>

int main() {

    char categoria;
    float prezzo, prezzoscontato, sconto;

    printf("inserisci la categoria di appartenenza (P=pensionato, S=studente, D=disoccupato): ");
    scanf("%c", &categoria);

    printf("inserisci il prezzo del biglietto: ");
    scanf("%f", &prezzo);



    switch (categoria){
        case 'P':
            sconto = prezzo*0.1;
            prezzoscontato= prezzo-sconto;
                    printf("il prezzo scontato per i pensionati e': %f", prezzoscontato);
                    break;

        case 'S':
            sconto = prezzo*0.15;
            prezzoscontato= prezzo-sconto;
            printf("il prezzo scontato per gli studenti e': %f", prezzoscontato);
            break;

        case 'D':
            sconto = prezzo*0.25;
            prezzoscontato= prezzo-sconto;
            printf( "il prezzo per i disoccupati e': %f", prezzoscontato);
            break;

        deafult:
            printf("la categoria non esiste.");

    }
return 0;




}
