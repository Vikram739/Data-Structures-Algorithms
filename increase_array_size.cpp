/*
    Created By : Vikram Markali
*/
#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    int *p,*q;
    int i;

    // p = (int *) malloc(5*sizeof(int));
    p = new int(5);
    p[0] = 2;
    p[1] = 5;
    p[2] = 7;
    p[3] = 8;
    p[4] = 11;
    
    q = new int(10);
    for(i=0;i<5;i++)
    {
        q[i] = p[i];
    }
        
    // free(p);
    delete p;   // operator that deallocates memory created by new operator...
    p=q;
    q=NULL;   
    for(i=0;i<5;i++)
    {
        // printf("%d ",p[i]);
        cout<<p[i]<<" ";
    }
    return 0;
}