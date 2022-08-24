/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
        // fun(n-1);
    }
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    fun(x);
    return 0;
}