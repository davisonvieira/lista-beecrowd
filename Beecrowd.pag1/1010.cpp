#include <cstdio>
#include <iostream>
using namespace std;
int main() {
   int id,id2;
   int quant,quant2;
   double valor,valor2;
   scanf("%d %d %lf",&id,&quant,&valor);
   scanf("%d %d %lf",&id2,&quant2,&valor2);
   printf("VALOR A PAGAR: R$ %.2f\n",(quant*valor)+(quant2*valor2));


}