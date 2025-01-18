#include <bits/stdc++.h>
using namespace std;
struct node
{
    string data;
    node *next;
};
node *head = NULL;
void traverse()
{
    node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    cin >> n;
    node *save = NULL;
    for (int i = 0; i < n; i++)
    {
        node *newnode = new node;
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
    node *ptr = head;
    while (ptr)
    {
        bool flag = false;
        node *p = head;
        while (p != ptr->next)
        {
            if (p != ptr)
            {
                if (p->data == ptr->data)
                {
                    flag = true;
                    break;
                }
            }
            p = p->next;
        }
        if (flag == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        ptr = ptr->next;
    }
}