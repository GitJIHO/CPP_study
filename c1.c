#include <stdio.h>

void add(double*, double, double);
void sub(double*, double, double);

int main(int argc, char * argv[]){
    double m, n, result = 0;

    void (*pf)(double*, double, double) = NULL;

    printf("입력: ");
    scanf("%f %f",&m, &n);

    pf = add;
    pf(&result, m, n);
    printf("add = %f", result);
    
    pf = sub;
    pf(&result, m, n);
    printf("sub = %f", result);
}

void add(double* result, double m, double n){
    *result = m + n;
}

void sub(double* result, double m, double n){
    *result = m - n;
}