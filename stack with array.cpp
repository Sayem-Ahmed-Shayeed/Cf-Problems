#include <bits/stdc++.h>
using namespace std;
int size;
int top = -1;
void push(int st[], int x)
{
    if (top == size - 1)
    {
        cout << "Overflow\n";
        exit(1);
    }
    else
    {
        top++;
        st[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Underflow\n";
        exit(1);
    }
    else
    {
        top--;
    }
}
void traverse(int st[])
{
    for (int i = 0; i <= top; i++)
    {
        cout << st[i] << ' ';
    }
    cout << endl;
}
int main()
{
    cin >> size;
    int st[size];
    push(st, 10);
    push(st, 20);
    push(st, 30);
    traverse(st);
    pop();
    pop();
    traverse(st);
    pop();
    pop();
}