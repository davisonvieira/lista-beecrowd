#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int d;
    cin>>d;
    int ano= d/365;
    d%= 365;
    int mes= d/30;
    int dias= d%30;
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dias);
}