#include <cstdio>
#include<iostream>
using namespace std;
int main() {
    double a,b,c;
    double pi= 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3f\n",(a*c)/2);
    printf("CIRCULO: %.3f\n",pi*(c*c));
    printf("TRAPEZIO: %.3f\n",((a+b)*c)/2);
    printf("QUADRADO: %.3f\n",b*b);
    printf("RETANGULO: %.3f\n",a*b);
}