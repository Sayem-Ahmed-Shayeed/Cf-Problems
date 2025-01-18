#include <bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node *next;
};
node *top = NULL;
void push(char x) // push fucntion to push in the stack
{
    node *newnode = new node;
    newnode->next = NULL;
    newnode->data = x;
    if (top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}
void pop() // pop function to pop out values from the stack
{
    top = top->next;
}
void traverse() // we don't need this but i added this for mu debugging purposes
{
    node *ptr = top;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        bool yes = true; // if this bcomes false anywhere in the program then we say this is not a balanced parenthesis
        for (auto it : s)
        {
            if (it == '(' or it == '{' or it == '[') // if the encountered bracket is opening brackets then we push it into the stack
            {
                push(it);
                // traverse();
            }
            else if (it == ')' or it == ']' or it == '}') // else we see there is there is any mismatch or there is nothing to compare then we say that the parenthesis are not balanced
            {
                if (top == NULL or (it == ')' and top->data != '(') or (it == ']' and top->data != '[') or (it == '}' and top->data != '{'))
                {
                    yes = false;
                    break;
                }
                pop();
            }
        }
        if (top == NULL and yes) 
        {
            cout << "YES\n";
        }
        else
        {
            cout << "N0\n";
        }
        top = NULL; 
    }
}

