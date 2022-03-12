#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num_1, num_2;
   printf("Enter the first number: ");
   scanf("%d", &num_1);
   printf("Enter the second number: ");
   scanf("%d", &num_2);
   if (num_1 == num_2)
   {
       printf("They are equal\n");
   }
   else
   {
        printf("They are not equals\n");
   }
    return 0;
}
