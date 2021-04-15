#include<stdio.h>

int main(void)
{
    char ch, soz[100] = {0};

    printf("Enter sentence: ");
    for (int i = 0; (ch = getchar()) != '\n' && i < 100; i++)
    {
       soz[i] = ch;
    }
    for (int i = 100; i >= 0; i--)
    {
      putchar(soz[i]);
    }
    
    
}