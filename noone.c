#include<stdio.h>

int main() {

  int num = 123;
  char str[5];
  sprintf(str, "%d", num); // integer to string
  printf("%s\n", str);
}
