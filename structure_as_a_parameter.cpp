/*
    Created By : Vikram Markali
*/
#include<bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct rect
{
    int length;
    int breath;
};
struct arr
{
    int a[100];
    int n;
};
void arr(struct arr ar)
{
    ar.a[0]= 100;
    int i;
    for(i=0;i<ar.n;i++)
    {
        printf("\n%d",ar.a[i]);
    }
}
int call(struct rect r1)
{
    return r1.length*r1.breath;
};

int main()
{
    struct rect r = {10,5};
    struct arr a = {{10,20,30,40,50},5};
    printf("Area of Retangle: %d",call(r));
    arr(a);
    printf("\nAfter Changes: ");
    int i;
    for(i=0;i<a.n;i++)
    {
        printf("\n%d",a.a[i]);
    }
    
    
    return 0;
}