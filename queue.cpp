#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
} q;
void create(Queue *q)
{
    cout << "Enter the size of the queue: ";
    cin >> q->size;
    // allocate the memory
    q->Q = new int(q->size);
    q->front = q->rear = 0;
}
void enqueue(Queue *q, int x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is full\n";
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}
void dequeue(Queue*q)
{
    if (q->front == q->rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        q->front = (q->front + 1) % q->size;
    }
}
void display(Queue q)
{
    for (int i = q.front + 1; i < q.rear + 1; i++)
    {
        cout << q.Q[i] << ' ';
    }
    cout << endl;
}
int main()
{
    create(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(q);
    dequeue(&q);
    display(q);
}
