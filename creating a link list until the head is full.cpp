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
    int cnt =0;
    head = new node;
    head->data = 1;
    head->next = NULL;
    node *save = head;
    while (true)
    {
        node *newnode = new node;
        if (newnode == NULL)
        {
            cout<<"total node : "<<cnt<<endl;
        }
        cnt++;
        newnode->data = cnt;
        save->next = newnode;
        save = newnode;
        newnode->next = NULL;
    }
    cout << cnt << endl;
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
}
