#include <stdio.h>

int main() {

    float r,v,p=3.14;
    printf("Enter r:");
    scanf("%f",&r);
    v=4.0f/3.0f*p*r*r*r;
    printf("Volume of sphere=%f",v);
}
