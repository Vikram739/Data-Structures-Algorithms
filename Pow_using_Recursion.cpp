/*
    Created By : Vikram Markali
*/

#include<bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int pow1(int m,int n)
{
    if(n == 0)
    {
        return 1;
    }
    return pow1(m,n-1)*m;
}
int pow2(int m,int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n%2 == 0)
    {
        return pow2(m*m,n/2);
    }
    return m * pow2(m*m,(n-1)/2);
}
int main()
{
    cout<<"Power: "<<pow1(2,3)<<endl;
    cout<<"Power: "<<pow2(2,3)<<endl;
    return 0;
}