#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maior=((a + b + abs(a-b))/2);
    if (c>maior) {
        printf("%d eh o maior\n",c);
    }
    else{
        printf("%d eh o maior\n",maior);
    }
}