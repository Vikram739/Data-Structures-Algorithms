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

void Display(struct Node *p)
{
    // struct Node *p;
    if(top == NULL)
    {
        cout<<"\nStack is Empty!!";
    }
    else
    {
        cout<<"\nLinked List: ";
        while(p != NULL)
        {
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    Display(top);
    cout<<"\nPoped Element: "<<pop();
    cout<<"\nPoped Element: "<<pop();
    Display(top);
    return 0;
}