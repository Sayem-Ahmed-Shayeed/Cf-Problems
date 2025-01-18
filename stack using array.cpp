#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;
};
void create(struct Stack *st)
{
    cout << "Enter the size: ";
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void push(struct Stack *st, int ele)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflowed\n";
    }
    else
    {
        st->top++;
        st->s[st->top] = ele;
    }
}
void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i] << ' ';
    }
    cout << endl;
}
int pop(Stack *st)
{
    int x = -1; // to store the deleted element
    if (st->top == -1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
int peek(Stack *st, int pos)
{
    // formula for finding position
    int posi = -1;
    posi = st->top - pos + 1;
    if (posi >= 0)
        cout << st->s[posi] << endl;
    else
        cout << "invalid position\n";
}
int top(Stack *st)
{
    if (st->top == -1)
    {
        cout << "The stack is empty\n";
    }
    else
    {
        cout << st->s[st->top] << endl;
    }
}
bool isEmpty(Stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    return 0;
}
bool isFull(Stack *st)
{
    if (st->top == st->size - 1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    // display(st);
    // cout<<pop(&st)<<endl;
    // display(st);
    // peek(&st,2);
    // top(&st);
    cout << isEmpty(&st);
    cout << isFull(&st);
}
