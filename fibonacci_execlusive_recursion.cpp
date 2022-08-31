/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-2) + fibo(n-1);
}
int main()
{
    cout<<"Fibonacci: "<<fibo(6);
    return 0;
}