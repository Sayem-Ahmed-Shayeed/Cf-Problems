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
    node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
}