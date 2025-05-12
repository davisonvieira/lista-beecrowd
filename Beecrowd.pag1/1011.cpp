#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double r;
    double pi=3.14159;
    scanf("%lf", &r);
    double vol=(4.0/3)*pi*(r*r*r);
    printf("VOLUME = %.3lf\n",vol);
}