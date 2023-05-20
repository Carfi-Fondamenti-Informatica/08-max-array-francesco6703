#include <iostream>
#include "cmake-build-debug/lib.h"
using namespace std;


int main() {
    int i = 0;
    int a;
    int numeri[a];
    do {
        cin >> i;
    }while (i<1);

    for (a=0; a<i; a++) {
        cin >> numeri[a];
    }
    cout << funzione(numeri, i);
    return 0;
}
