#include "lib.h"

#include <iostream>
using namespace std;

int funzione(int numeri[], int i)
{
    while (i<1)
    {
        cin >> i;
    }
    int x=1;
    for (int a=0; a<i; a++)
    {
        cin >> numeri[a];
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
