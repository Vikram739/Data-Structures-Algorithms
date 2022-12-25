/*
    Created By : Vikram Markali
*/


#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void createNode(struct Node *p)
{
    p->data = 50;
    p->next = NULL;
    cout<<p->data;
    // printf("%d",p->data);
}
int main()
{
    struct Node *p;

    // create node inside heap...
    p = new Node;
    //  p = (struct Node *)malloc(sizeof(Node));       //using c lang...
    
    createNode(p);
    return 0;
}