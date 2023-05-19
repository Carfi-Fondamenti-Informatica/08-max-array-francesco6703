#include <iostream>
#include "lib.h"
int funzione(int numeri[], int i)
{
    std::cin >> i;
    while (i<1)
{
	std::cin >> i;
}
    int x=1;
    for (int a=0; a<i; a++)
    {
        std::cin >> numeri[a];
    }
    int max=numeri[0];
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
