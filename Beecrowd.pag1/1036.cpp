#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        double r1 = (-b + sqrt(delta)) / (2 * a);
        double r2 = (-b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }


}
