#include <stdio.h>
int printPrime(int x){
    int i;
    for (i = 2; x != 1; i ++)
    {
        if (x % i == 0)
        {
            x /= i;
            printf ("primeFactor:%d\n", i);
            i --;
            }
        }printf("\n");
}
int main(){
    int N, A_dizi[100]={};
    printf("how many numbers will be entered:");
    scanf("%d",&N);
    for (int i = 0; i < N; ++i) {
        printf("Number:");
        scanf("%d",&A_dizi[i]);
    }
    for (int i = 0; i < N; ++i) {
        printPrime(A_dizi[i]);
    }
}