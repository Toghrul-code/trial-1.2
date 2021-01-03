#include <stdio.h>

int main() {
    float dollar,addtax;

    printf("How many dollars will you enter:");

    scanf("%f",&dollar);

    addtax=dollar/100.0*5.0+dollar;

    printf("With tax adde:%f",addtax);
}