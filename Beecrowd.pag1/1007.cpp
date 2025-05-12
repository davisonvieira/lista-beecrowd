#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    double dif= ( a * b - c * d);
    printf("DIFERENCA = %.f\n",dif);
}