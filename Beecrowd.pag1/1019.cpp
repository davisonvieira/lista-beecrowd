#include <cstdio>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    int h;
    scanf("%d,",&h);
    int hora= h/3600;
    h%= 3600;
    int min= h/60;
    int seg= h% 60;
    printf("%d:%d:%d\n",hora,min,seg);
}