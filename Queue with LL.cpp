#include <bits/stdc++.h>
using namespace std;
struct Q
{
    int data;
    Q *next;
};
Q *front = NULL;
Q *rear = NULL;
void push(int x)
{
    Q *newnode = new Q;
    newnode->next = NULL;
    newnode->data = x;
    if (newnode == NULL)
    {
        cout << "Overflow\n";
        exit(1);
    }
    else if (front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void pop()
{
    if (front == NULL)
    {
        cout << "Underflow\n";
        exit(1);
    }
    else if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        front = front->next;
    }
}
void traverse()
{
    Q *ptr = front;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    traverse();
    pop();
    traverse();
    pop();
    traverse();
}