#include <cstdio>
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    double n;
    scanf("%lf",&n);
    int valor = (int) n;
    int valorCentavos = (int) round((n - valor) * 100);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",valor/100);
    valor %= 100;
    printf("%d nota(s) de R$ 50.00\n",valor/50);
    valor %= 50;
    printf("%d nota(s) de R$ 20.00\n",valor/20);
    valor %= 20;
    printf("%d nota(s) de R$ 10.00\n",valor/10);
    valor %= 10;
    printf("%d nota(s) de R$ 5.00\n",valor/5);
    valor %=5 ;
    printf("%d nota(s) de R$ 2.00\n",valor/2);
    valor %=2 ;
    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",valor);
    valor = valorCentavos;
    printf("%d moeda(s) de R$ 0.50\n",valor/50);
    valor %= 50;
    printf("%d moeda(s) de R$ 0.25\n",valor/25);
    valor %= 25;
    printf("%d moeda(s) de R$ 0.10\n",valor/10);
    valor %= 10;
    printf("%d moeda(s) de R$ 0.05\n",valor/5);
    valor %= 5;
    printf("%d moeda(s) de R$ 0.01\n",valor);



}