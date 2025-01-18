#include <bits/stdc++.h>
using namespace std;
struct Q // structrue for diubly LL
{
    Q *prev;
    int data;
    Q *next;
};
Q *front = NULL;       // front to push at the front of the LL
Q *rear = NULL;        // Rear ro push at the end of the LL it basically like an array but dynamic
void push_front(int x) // adds eleement at the front of the LL
{
    Q *newnode = new Q;
    newnode->prev = NULL;
    newnode->next = NULL;
    newnode->data = x;

    if (!front and !rear)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        newnode->next = front;
        front->prev = newnode;
        front = newnode;
    }
}
void push_at_back(int x) // adds an element at the end of the LL
{

    Q *newnode = new Q;
    newnode->prev = NULL;
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
        newnode->prev = rear;
        rear = newnode;
    }
}
void peek_front() // print the value fo the first element from the left and removes it
{
    if (front == NULL and rear == NULL)
    {
        cout << "No job for Ada?\n";
    }
    else if (front == rear)
    {
        cout << front->data << '\n';
        front = NULL;
        rear = NULL;
    }
    else
    {
        cout << front->data << '\n';
        Q *temp = front;
        front = front->next;
        front->prev = NULL;
    }
}
void peek_back() // prints last element of the LL and pops it out
{
    if (front == NULL and rear == NULL)
    {
        cout << "No job for Ada?\n";
    }
    else if (front == rear)
    {
        cout << rear->data << '\n';
        front = NULL;
        rear = NULL;
    }
    else
    {
        cout << rear->data << '\n';
        if (rear->prev != NULL)
        {
            rear = rear->prev;
            rear->next = NULL;
        }
        else 
        {
            front = NULL;
            rear = NULL;
        }
    }
}

void traverse() // to traverse the LL
{
    Q *ptr = front;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "toFront")
        {
            // cout << "tofrnd:";
            int data;
            cin >> data;
            push_front(data);
            // traverse();
        }
        else if (cmd == "push_back")
        {
            // cout << "pb:";
            int data;
            cin >> data;
            push_at_back(data);
            // traverse();
        }
        else if (cmd == "back")
        {
            // cout << "back:";
            peek_back();
        }
        else if (cmd == "front")
        {
            // cout << "front:";
            peek_front();
        }
        else
        {
            Q *save = front;
            Q *temp = NULL;
            Q *curr = front;
            while (curr != NULL)
            {
                temp = curr->prev;
                curr->prev = curr->next;
                curr->next = temp;
                curr = curr->prev;
            }
            if (temp != NULL)
            {
                front = temp->prev;
                rear = save;
                rear->next = NULL;
            }

            // traverse();
            // cout << front->data << " || " << rear->data << endl;
        }
    }
}