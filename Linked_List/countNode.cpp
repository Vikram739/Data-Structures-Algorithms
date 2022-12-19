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

int countNode(struct Node *p)
{
    int cnt=0;
    while(p != NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

// counting in recursive way...
int countNodeRecursive(struct Node *p)
{
    if(p != NULL)
    {
        return countNodeRecursive(p->next) + 1;
    }
    return 0;
}

int main()
{
    int A[] = {10,20,30,40,50};

    createNode(A,5);
    cout<<"Number of Nodes: "<<countNode(first)<<endl;
    cout<<"Number of Nodes using recursion: "<<countNodeRecursive(first)<<endl;
    displayList(first);

    return 0;
}