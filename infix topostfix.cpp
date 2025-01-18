#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    char data;
    Stack *next;
};

Stack *top = NULL;

void push(char x)
{
    Stack *newnode = new Stack;
    newnode->next = NULL;
    newnode->data = x;
    if (newnode == NULL) // Condition corrected: newnode should be checked after allocation
    {
        cout << "overflow\n";
        exit(1);
    }
    else if (top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

void pop()
{
    if (top == NULL)
    {
        cout << "Underflow\n";
        exit(1);
    }
    else
    {
        top = top->next;
    }
}

void traverse()
{
    Stack *ptr = top;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    string s;
    cin >> s;
    s = "(" + s + ")";
    string exp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z') // Corrected condition
        {
            exp.push_back(s[i]);
        }
        else if (s[i] == '(')
        {
            push(s[i]);
        }
        else if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^')
        {
            if ((s[i] == '+' or s[i] == '-') and (top != NULL and (top->data == '*' or top->data == '/' or top->data == '^'))) // Corrected condition
            {
                exp.push_back(top->data);
                pop();
                push(s[i]);
            }
            else if ((s[i] == '*' or s[i] == '/') and (top != NULL and top->data == '^')) // Corrected condition
            {
                exp.push_back(top->data);
                pop();
                push(s[i]);
            }
            else
            {
                push(s[i]);
            }
        }
        else if (s[i] == ')')
        {
            while (top->data != '(')
            {
                exp.push_back(top->data);
                pop();
            }
            pop();
        }
    }
    cout << exp << endl;
}
