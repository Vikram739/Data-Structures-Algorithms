/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int x;
int fun(int n)
{
    // static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
}
int main()
{
    int val = 5;
    int result = fun(val);
    cout<<result<<endl;

    result = fun(val);
    cout<<result<<endl;
    return 0;
}