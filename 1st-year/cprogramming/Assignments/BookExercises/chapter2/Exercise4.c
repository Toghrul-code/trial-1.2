#include <stdio.h>

int main() {
       float x,Polynomial,x5,x4,x3,x2;
       printf("Enter x:");
       scanf("%f",&x);
       x2=x*x;
       x3=x2*x;
       x4=x3*x;
       x5=x4*x;
       Polynomial=3*x5+2*x4-5*x3-x2+x*7-6;
       printf("Polynomial result=%f",Polynomial);
}