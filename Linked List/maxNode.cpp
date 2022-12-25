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
}*first;


void createNode(int A[],int n)
{
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    // first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(int i=1;i<n;i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        // t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void displayList(struct Node *p)
{
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}

int maxNode(struct Node *p)
{
    int maxi = INT_MIN;
    while(p != NULL)
    {
        if(p->data > maxi)
        {
            maxi = p->data;
        }
        p = p->next;
    }
    return maxi;
}

int maxNodeRecursion(struct Node *p)
{
    int x = 0;
    if(p);
    {
        x = maxNodeRecursion(p->next);
        if(x > p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }   
    }
    return INT_MIN;
}

int main()
{
    int A[] = {10,20,30,60,40,50};
    createNode(A,6);
    displayList(first);

    cout<<"\nMaximum using Loop: "<<maxNode(first);
    cout<<"\nMaximum using Recursion: "<<maxNodeRecursion(first);
    return 0;
}