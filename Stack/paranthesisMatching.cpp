/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct Node
{
    char data;
    struct Node *next;
}*top=NULL;


void push(int x)
{
    struct Node *t;
    // t = (struct Node*)malloc(sizeof(struct Node));
    t = new Node;
    
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

int peek(int pos)
{
    struct Node *p;
    if(top == NULL)
    {
        cout<<"\nStack is Empty!!";
    }
    else
    {
        p = top;
        for(int i=0;p!=NULL && i<pos-1;i++)
        {
            p = p->next;
        }
        return p->data;
    }
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

bool isBalanced(char *exp)
{
    for(int i=0;exp[i] != '\0';i++)
    {
        if(exp[i] == '(')
        {
            push(exp[i]);
        }
        else if(exp[i] == ')')
        {
            if(top == NULL)
            {
                return false;
            }
            pop();
        }
    }
    if(top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char *exp = "((a+b)*(c-d))";
    cout<<"isBalanced: "<<isBalanced(exp);
    return 0;
}