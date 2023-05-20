#include "lib.h"
int funzione(int numeri[], int i)
{
    int b=1;
    int max=numeri[0];

    while (b<i)
    {
        if(numeri[b]>max)
        {
            max=numeri[b];
        }
        b=b+1;
    }
    return max;
}
