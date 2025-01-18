#include <bits/stdc++.h>
using namespace std;

int arr[100];
int fib(int n) {
    if(n<=1)return n;
    if (arr[n] != -1) {
        return arr[n];
    }
    return arr[n]=fib(n-1) + fib(n-2);
}

int main() {
    fill(arr, arr + 100, -1);
    arr[0]=0;
    arr[1]=1;
    fib(99);
    for (int i = 0; i <100; i++) {
        cout << arr[i] << ' ';
    }
}
