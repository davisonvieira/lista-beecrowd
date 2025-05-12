#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int num,horas;
    double salariohr;
    scanf("%d %d %lf",&num,&horas,&salariohr);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f \n",(salariohr*horas));

}