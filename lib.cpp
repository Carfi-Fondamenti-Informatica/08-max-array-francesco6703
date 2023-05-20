#include "lib.h"

double funzione(double numeri[], int i) {
    double max = numeri[0];

    for (int b = 1; b < i; b++) {
        if (numeri[b] > max) {
            max = numeri[b];
        }
    }
    return max;
}
