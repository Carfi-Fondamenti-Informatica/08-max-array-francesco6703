#include <iostream>
#include "lib.h"


int main() {
    int i;
    int a=0;
    int max;
    int numeri[i];
    std::cin >> i;
    while (i<1)
{
	std::cin >> i;
}
    for (int a=0; a<i; a++)
    {
        std::cin >> numeri[i];
    }
    max = funzione(numeri, i);
    std::cout << max;
    return 0;
}
