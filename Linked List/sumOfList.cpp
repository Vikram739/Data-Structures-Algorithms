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

    // first = (struct Node *)malloc(sizeof(struct Node));
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    // for multiple nodes...
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
 int addAll(struct Node *p)
 {
    int sum = 0;
    while(p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
 }

//  using recursion...
int addAllRecursive(struct Node *p)
{
    if(p != NULL)
    {
        return addAllRecursive(p->next) + p->data;
    }
    return 0;
}
int main()
{
    int A[] = {10,20,30,40,50};
    createNode(A,5);
    cout<<"Sum using loop: "<<addAll(first);
    cout<<"\nSum using Recursion: "<<addAllRecursive(first);
    return 0;
}