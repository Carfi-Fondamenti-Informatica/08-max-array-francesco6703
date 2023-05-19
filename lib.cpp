#include <iostream>
#include "lib.h"

int funzione(int numeri[], int i)
{

    std::cin >> i;
    int x=1, max=numeri[0];
    for (int a=0; a<i; a++)
    {
        std::cin >> numeri[a];
    }

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
