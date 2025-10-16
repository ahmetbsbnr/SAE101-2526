#include <stdlib.h>
#include "aleatoire.h"

int aleatoire(int mini, int maxi) {
    return mini + rand() % (maxi - mini + 1);
}
