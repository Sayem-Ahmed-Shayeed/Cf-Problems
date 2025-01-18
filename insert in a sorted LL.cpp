#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void create(int n)
{
    node *save = NULL;
    for (int i = 0; i < n; i++)
    {
        node *newnode = new node;
        if (newnode == NULL)
        {
            cout << "Overflow\n";
            exit(1);
        }
        else
        {
            newnode->next = NULL;
            cin >> newnode->data;
            if (head == NULL)
            {
                head = newnode;
            }
            else
            {
                save->next = newnode;
            }
            save = newnode;
        }
    }
}
void traverse()
{
    node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}
void insert_at_beg(int x)
{
    node *newnode = new node;
    newnode->next = NULL;
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void insert_at_end(int x)
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    node *newnode = new node;
    newnode->next = NULL;
    newnode->data = x;
    ptr->next = newnode;
}
void insert_at_mid(int key, int x)
{
    node *ptr = head;
    while (ptr and ptr->data != key)
    {
        ptr = ptr->next;
    }
    if (ptr->next == NULL)
    {
        insert_at_end(x);
    }
    else
    {
        node *save = ptr->next;
        node *newnode = new node;
        newnode->next = NULL;
        newnode->data = x;
        newnode->next = save;
        ptr->next = newnode;
    }
}
void delete_from_beg()
{
    head = head->next;
}
void delete_from_end()
{
    node *ptr = head;
    node *save = NULL;
    while (ptr->next)
    {
        save = ptr;
        ptr = ptr->next;
    }
    if (save == NULL)
    {
        head = NULL;
    }
    else
    {
        save->next = NULL;
    }
}
void delete_at_mid(int key)
{
    node *save = NULL;
    node *ptr = head;
    while (ptr and ptr->data != key)
    {
        save = ptr;
        ptr = ptr->next;
    }
    if (ptr == head)
    {
        delete_from_beg();
    }
    else if (ptr->next == NULL)
    {
        delete_from_end();
    }
    else
    {
        node *tail = ptr->next;
        save->next = tail;
    }
}
int main()
{
    int n;
    cin >> n;
    create(n);
    traverse();
    // insert_at_beg(10);
    // traverse();
    // insert_at_end(20);
    // traverse();
    // insert_at_mid(5, 30);
    // traverse();
    // delete_from_beg();
    // traverse();
    // delete_from_end();
    // traverse();
    delete_at_mid(3);
    traverse();
}
