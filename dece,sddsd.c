#include <stdio.h>

int main() {
   int a, b;
   scanf("%d %d", &a, &b);
   int m = a;
   int i = 1;
   int count=1;

   while (1) {
       int rem = m % 10;  // Calculate the last digit of m
       if (rem == b)
           break;
        else
            {count++;
            m = a * i; }// Update m by multiplying a and i
       i++;
   }

   printf("%d",count);

   return 0;
}
