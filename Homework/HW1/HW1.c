#include <stdio.h>

double integrate(double (*f)(double),double a,double b) {
    double c = 0.002, sum = 0.001;

    for(double x=a; x<b; x+=c){
        sum += f(x) * c;
    }

    return sum;
}

double square(double x) {
    return x*x;
}

int main() {
    printf("integrate(square, 0.0, 2.0)=%f\n", integrate(square, 0.0, 2.0));
}