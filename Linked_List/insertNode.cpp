/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
// #include<stdlib.h>
#define print(x) cout<<x<<;
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first;


void createNode(int A[],int n)
{
    struct Node *t,*last;
    // first = (struct Node *)malloc(sizeof(struct Node));
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(int i=1;i<n;i++)
    {
        // t = (struct Node *)malloc(sizeof(struct Node));
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void displayList(struct Node *p)
{
    cout<<"\nLinked List: ";
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int countNodes(struct Node *p)
{
    int cnt = 0;
    while(p != NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

void insertNode(struct Node *p, int pos, int x)
{
    // checking for valid position...
    if(pos < 0 || pos > countNodes(p))
    {
        cout<<"\nInvalid index, Node not inserted...";
        return;
    }

    struct Node *t;
    t = (struct Node*) malloc(sizeof(struct Node));
    t->data = x;

    if(pos == 0)
    {
        t->next = first;
        first = t;
        cout<<"\nNode inserted at begining...";
        
    }
    else
    {
        for(int i=0;i<pos-1 && p != NULL;i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        cout<<"\nNode inserted after: "<<pos;
    }

}
int main()
{
    int A[] = {10,20,30,60,40,50};
    createNode(A,6);
    
    displayList(first);
    insertNode(first,0,5);
    displayList(first);
    insertNode(first,4,35);
    displayList(first);
    

    return 0;
}