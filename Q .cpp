#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int data;
    Queue *next;
};
Queue *front = NULL;
Queue *rear = NULL;
void push(int x)
{
    Queue *newnode = new Queue;
    if (newnode == NULL)
    {
        cout << "Overflow\n";
    }
    newnode->next = NULL;
    newnode->data = x;

    if (front == NULL and rear == NULL)
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
        cout << "Overflow\n";
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
    Queue *ptr = front;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    push(10);
    push(20);
    traverse();
    pop();
    
    traverse();
}