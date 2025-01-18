#include <bits/stdc++.h>
using namespace std;
struct Q
{
    int val;
    int rank;
    Q *next;
};
Q *head = NULL;
void push(int x, int rank)
{
    Q *newnode = new Q;
    newnode->next = NULL;
    newnode->val = x;
    newnode->rank = rank;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Q *ptr = head;
        Q *save = NULL;
        while (ptr and ptr->rank <= newnode->rank)
        {
            save = ptr;
            ptr = ptr->next;
        }
        if (save == NULL)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            save->next = newnode;
            newnode->next = ptr;
        }
    }
}
void pop()
{
    head = head->next;
}
void traverse()
{
    Q *ptr = head;
    while (ptr)
    {
        cout << ptr->val << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int rank;
        cin >> rank;
        push(x, rank);
    }
    pop();
    traverse();
}