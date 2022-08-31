/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}
int Isum(int n)
{
    if(n == 0)
        return 0;
    int s=0,i; 
    for(i=1;i<=n;i++) 
        s=s+i;
    return s;
}
int main()
{
    int x = 5;
    cout<<"Sum: "<<sum(x);
    cout<<"\nSum: "<<Isum(x);
    return 0;
}