#include <cstdio>
#include <iostream>

using namespace std;
int main() {
    char name[100];
    scanf("%s",name);
    double salario, venda_total;
    scanf("%lf %lf",&salario,&venda_total);
    printf("TOTAL = R$ %.2f\n",salario+(venda_total*15/100));

}