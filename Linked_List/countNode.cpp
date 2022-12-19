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
    first->data = A[0];
    first->next = NULL;
    last = first;

    // for multiple nodes...
    for(int i=1;i<n;i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
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
int main()
{
    int A[] = {10,20,30,40,50};

    createNode(A,5);
    displayList(first);
    return 0;
}