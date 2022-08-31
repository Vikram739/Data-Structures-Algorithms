/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Nested Recursion...

int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}
int main()
{
    int x =  fun(95);   //Calling Nested Recursion Function...
    cout<<"Nested Recursion: "<<x<<endl;
    return 0;
}