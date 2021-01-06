#include <stdio.h>

int main() {
  int amount,p20,p10,p5,p1,pr20,pr10,pr5,pr1;
  printf("Enter the Amount:");
  scanf("%d",&amount);

  p20 = amount/20;

  pr20 = amount%20;

  p10 = pr20/10;

  pr10 = pr20%10;

  p5 = pr10/5;

  pr5 = pr10%5;

  p1 = pr5/1;

  pr1 = pr5%1;

  printf("Enter 20 in :%d\n" , p20 , "pieces");

  printf("Enter 10 in :%d\n" , p10 , "pieces");

  printf("Enter 5 in :%d\n" , p5 , "pieces");

  printf("Enter 1 in :%d\n" , p1 , "pieces");
}
