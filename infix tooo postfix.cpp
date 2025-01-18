
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
    if (newnode == NULL)
    {
        cout << "Overflow\n";
        exit(1);
    }
    newnode->next = NULL;
    newnode->data = x;

    newnode->next = top;
    top = newnode;
}
void pop()
{
    if (top == NULL)
    {
        cout << "underflow\n";
        exit(1);
    }
    top = top->next;
}
void traverse()
{
    Stack *ptr = top;
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
}
int main()
{
    string s;
    getline(cin, s);

    s = "(" + s + ")";

    string exp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            exp.push_back(s[i]);
        }
        else if (s[i] == '(')
        {
            push(s[i]);
        }
        else if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^')
        {
            if ((s[i] == '+' or s[i] == '-') and (top->data == '*' or top->data == '/' or top->data == '^'))
            {
                exp.push_back(top->data);
                pop();
                push(s[i]);
            }
            else if ((s[i] == '*' or s[i] == '/') and (top->data == '^'))
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
        else
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
