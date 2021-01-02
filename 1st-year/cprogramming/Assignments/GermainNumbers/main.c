#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("welcome to program\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);

    int a[y-x];
    int index = 0;

    for (int i = x; i <= y; i++) {
        if (i == 1 || i == 2 || i == 3) {
            a[index] = i;
            index++;
            continue;
        }

        int n = 2;
        for (; n <= sqrt(i); n++) {
            if (i % n == 0)
                break;
        }
        if (n <= sqrt(i))
            continue;

        int possibleGermain = 2 * i + 1;
        if (possibleGermain == 1 || possibleGermain == 2 || possibleGermain == 3) {
            a[index] = i;
            index++;
            continue;
        }

        for (n = 2; n <= sqrt(possibleGermain); n++) {
            if (possibleGermain % n == 0)
                break;
        }
        if (n <= sqrt(possibleGermain))
            continue;

        a[index] = i;
        index++;
    }

    if (index > 0)
        printf("Germain numbers: ");

    for (int i = 0; i < index; i++) {
        printf("%d ", a[i] * 2 + 1);
    }    return 0;
}