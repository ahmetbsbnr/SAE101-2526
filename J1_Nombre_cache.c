/* 

Jeux : 1 

Le Nombre Caché

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "aleatoire.h"

int Vmini = 500;
int Vmaxi = 1000;
int VMAX;
int N;

int main(){
    srand(time(NULL));  

    VMAX = aleatoire(Vmini, Vmaxi);
    N = aleatoire(1, VMAX);

    printf("Vmini : %d\n", Vmini);
    printf("Vmaxi : %d\n", Vmaxi);
    printf("Vmax : %d\n", VMAX);
    printf("N : %d\n", N);

    return 0;

    
}

