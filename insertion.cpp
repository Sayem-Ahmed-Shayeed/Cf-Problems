#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
int main()
{
    int n;
    cout << "enter how many node: ";
    cin >> n;
    node *save = NULL;
    for (int i = 0; i < n; i++)
    {
        node *newnode = new node;
        if (newnode == NULL)
        {
            cout << "overflow\n";
            exit(1);
        }
        else
        {
            int x;
            cout << "Enter the data :";
            cin >> x;
            newnode->next = NULL;
            newnode->data = x;
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

    // LL traversal
    node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;

    // insert at start
    int x;
    cin >> x;
    node *newnode = new node;
    if (newnode == NULL)
    {
        cout << "Overflow\n";
        exit(1);
    }
    else
    {
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }
    ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;

    // insert at middle

    int mid_val;
    cin >> mid_val;
    newnode = new node;
    if (newnode == NULL)
    {
        cout << "overflow\n";
        exit(1);
    }
    else
    {
        newnode->data = mid_val;
        cout << "After which: ";
        int key;
        cin >> key;
        ptr = head;
        while (ptr->data != key)
        {
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }

    ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;

    // insert at middle
    int last_val;
    cin >> last_val;

    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    newnode = new node;
    newnode->next = NULL;
    newnode->data = last_val;
    ptr->next = newnode;


    ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}