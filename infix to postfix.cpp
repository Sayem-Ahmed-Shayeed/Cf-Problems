#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    char data;
    Stack *next;
};
Stack *top = NULL;
void push(char n)
{
    Stack *newnode = new Stack;
    if (newnode == NULL)
    {
        cout << "Stack overflowed\n";
        exit(1);
    }
    newnode->data = n;
    newnode->next = NULL;

    newnode->next = top;
    top = newnode;
}
void pop()
{
    if (top == NULL)
    {
        cout << "Underflowed\n";
        exit(1);
    }
    top = top->next;
}

int main()
{
    string str;
    getline(cin, str);
    str = "(" + str + ")"; // concatenation
    string exp;
    for (int i = 0; i < str.size(); i++) // for sumbol checking
    {
        if ((str[i] >= 'A' and str[i] <= 'Z') or (str[i] >= 'a' and str[i] <= 'z'))
        {
            exp.push_back(str[i]);
        }
        else if (str[i] == '(')
        {
            push(str[i]);
        }
        else if (str[i] == '+' or str[i] == '-' or str[i] == '*' or str[i] == '/' or str[i] == '^')
        {
            if ((str[i] == '+' or str[i] == '-') and (top->data == '*' or top->data == '/' or top->data == '^'))
            {
                exp.push_back(top->data);
                pop();
                push(str[i]);
            }
            else if ((str[i] == '*' or str[i] == '/') and (top->data == '^'))
            {
                exp.push_back(top->data);
                pop();
                push(str[i]);
            }
            else
            {
                push(str[i]);
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