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

struct Node* createList(int A[],int n)
{
    struct Node *t,*last;
    // first = (struct Node*)malloc(sizeof(Node));
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        // t =(struct Node*) malloc(sizeof(Node));
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;

    }
    return first;
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

// concat two linked lists using extra pointer...
void concatLists(struct Node *first,struct Node *second)
{
    struct Node *p = first;
    if(first->next)
    {
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = second;
        second = NULL;
    }
    else
    {
        first->next = second;
        second = NULL;
    }
}


int main()
{
    int A[] = {10,20,30,40,50};
    int B[] = {60,70,80};

    struct Node *first = createList(A,5);
    struct Node *second = createList(B,3);
    displayList(first);
    displayList(second);

    concatLists(first,second);
    displayList(first);


    

    return 0;
}
