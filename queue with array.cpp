#include <bits/stdc++.h>
using namespace std;
int front = -1;
int rear = -1;
void push(int Q[], int x, int size)
{
    if ((front == 0 and rear == size - 1) or (rear + 1 == front))
    {
        cout << "overflow\n";
        exit(1);
    }
    else if (front == -1 and rear == -1)
    {
        front++;
        rear++;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    Q[rear] = x;
}
void pop(int size)
{
    if (front == -1 and rear == -1)
    {
        cout << "Underflow\n";
        exit(1);
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}
void traverse(int Q[], int size)
{
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << Q[i] << ' ';
        }
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            if (i == size - 1)
            {
                cout << Q[i] << ' ';
                i = 0;
            }
            else
            {
                cout << Q[i] << ' ';
            }
        }
    }
    cout << endl;
}
int main()
{
    int size;
    cin >> size;
    int Q[size];
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        push(Q, x, size);
    }
    traverse(Q, size);
    pop(size);
    traverse(Q, size);
    pop(size);
    traverse(Q, size);
}