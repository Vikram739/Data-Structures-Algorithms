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
}*first=NULL,*last=NULL;

void insertLast(int x)
{
   struct Node *t;
   t =(struct Node*) malloc(sizeof(Node));
   t->data = x;
   t->next = NULL;

   if(first == NULL)
   {       
        first = last = t;
   }
   else
   {
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
int main()
{
    insertLast(10);
    insertLast(30);
    insertLast(20);
    displayList(first);

    return 0;
}