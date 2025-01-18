#include <bits/stdc++.h>
using namespace std;
struct Q
{
    int data;
    Q *next;
};
Q *front = NULL;
Q *rear = NULL;
void push(int x) // pushing data at the beg of the stack
{
    Q *newnode = new Q;
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
void pop() // popping data if the Queue is not emoty from the beg of the stack
{
    if (front != NULL)
    {
        if (front == rear)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->next;
        }
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
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1) // if n==1 then push an element in the stack
        {
            int x;
            cin >> x;
            push(x);
        }
        else if (n == 2) // if n==2 and Queuei s not empty then pop out  an element
        {
            pop();
        }
        else // if n==3 then if the Queue is empty then print empty else print the front data
        {
            if (front == NULL)
            {
                cout << "Empty!\n";
            }
            else
            {
                cout << front->data << "\n";
            }
        }
    }
}