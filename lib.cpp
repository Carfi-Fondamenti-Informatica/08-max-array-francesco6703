#include "lib.h";

float funzione(int numeri[], int i)
{
    int x=1, max=numeri[0];
    while (x<i)
    {
        if(numeri[x]>max)
        {
            max=numeri[x];
        }
        x++;
    }
    return max;
}
