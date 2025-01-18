#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *prev;
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
                newnode->prev = NULL;
            }
            else
            {
                newnode->prev = save;
                save->next = newnode;
            }
            save = newnode;
        }
    }
}
void insert_at_beg(int x)
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
        newnode->prev = NULL;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
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
void insert_at_end(int x)
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    node *newnode = new node;
    newnode->prev = NULL;
    newnode->next = NULL;
    newnode->data = x;
    newnode->prev = ptr;
    ptr->next = newnode;
}
void insert_at_mid(int key, int x)
{
    node *ptr = head;
    node *save = NULL;
    node *newnode = new node;
    newnode->prev = NULL;
    newnode->next = NULL;
    newnode->data = x;

    while (ptr != NULL and ptr->data != key)
    {
        ptr = ptr->next;
    }
    save = ptr->next;
    if (save != NULL)
    {
        ptr->next = newnode;
        newnode->prev = ptr;
        newnode->next = save;
        save->prev = newnode;
    }
    else
    {
        ptr->next = newnode;
        newnode->prev = ptr;
        newnode->next = NULL;
    }
}
void delete_at_beg()
{
    if (head == NULL)
    {
        cout << "Underflow\n";
        exit(1);
    }
    head = head->next;
    head->prev = NULL;
}
void delete_at_end()
{
    node *ptr = head;
    node *save = NULL;
    while (ptr->next != NULL)
    {
        save = ptr;
        ptr = ptr->next;
    }
    if (save != NULL)
        save->next = NULL;
    else
    {
        head = NULL;
    }
}
void delete_at_mid(int x)
{
    node *ptr = head;
    node *save = NULL;
    while (ptr->data != x)
    {
        save = ptr;
        ptr = ptr->next;
    }
    if (save == NULL)
    {
        // means delete at beg
        delete_at_beg();
    }
    else if (ptr->next == NULL)
    {
        delete_at_end();
    }
    else
    {
        node *tail = ptr->next;
        save->next = tail;
        tail->prev = save;
    }
}
int main()
{
    int n;
    cin >> n;
    create(n);
    // traverse();
    // insert_at_beg(10);
    // insert_at_beg(30);
    // traverse();
    // insert_at_end(20);
    // traverse();
    // insert_at_mid(30, 40);
    // traverse();
    // insert_at_mid(2, 100);
    // traverse();
    // insert_at_mid(20, 60);
    // traverse();
    // delete_at_beg();
    // delete_at_beg();
    // traverse();
    // delete_at_end();
    // traverse();
    delete_at_mid(3);
    traverse();
}