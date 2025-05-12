#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int tempo;
    int cont=50;
    cin>>tempo;
    if (tempo<=100) {
        printf("valor a pagar R$: 50.00\n");
    }else {
        while(tempo>100) {
            cont++,cont++;
            printf("valor a pagar R$: %2d.00\n",cont);
            cin>>tempo;
        }
    }
}