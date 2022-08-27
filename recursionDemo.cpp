/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
}
int main()
{
    int x = 5;
    int result = fun(x);
    cout<<result;
    return 0;
}