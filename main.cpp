#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int i;
    cin >> i;

    double numeri[i];
    for (int a = 0; a < i; a++) {
        cin >> numeri[a];
    }

    double max= funzione(numeri, i);
    cout << max;

    return 0;
}
