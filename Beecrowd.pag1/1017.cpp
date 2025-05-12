#include <cstdio>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    int a;
    int b;
    int km=12;
    scanf("%d %d",&a,&b);
    double calculo= (a*b)/ static_cast<double>(km);
    printf("%.3f\n",calculo);
}

