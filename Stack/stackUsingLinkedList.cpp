/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    
    if(t == NULL)
    {
        cout<<"Stack is Full!!";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct Node *t;
    int x=-1;

    if(top == NULL)
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Display()
{
    
}
int main()
{
    
    return 0;
}