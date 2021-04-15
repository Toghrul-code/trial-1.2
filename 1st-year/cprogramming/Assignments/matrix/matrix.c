#include <stdio.h>
int matrix[5][5];
int i, j, a = 0;

void enter_values(void);
void make_route(void);

int main(void)
{   
   printf("Enter the values(5-5): \n"); 
   enter_values();
   make_route();
}

void enter_values(void)
{
    for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &matrix[i][j]);
    }
    }
}
void make_route(void)
{
   for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++)
   {
     if (matrix[i][j] == 1)
     {
       printf("1 ");
     }
   }
   if (matrix[i][j] == 0)
   {
     printf("2 ");
     goto 
   }
  }
}