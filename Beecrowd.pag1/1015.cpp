#include <cstdio>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
    double x,y;
    scanf("%lf %lf",&x,&y);
    double a,b;
    scanf("%lf %lf",&a,&b);
    double calculo= sqrt(((a-x)*(a-x)+((b-y)*(b-y))));
    printf("%.4f\n",calculo);
}