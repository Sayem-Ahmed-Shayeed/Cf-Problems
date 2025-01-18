#include<stdio.h>
void main(){
    int a=5;
    int b= ++a + a++ + --a;
    printf("%d", b);
}

