/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Tree Recursion example...
// O/P: 3 2 1 1 2 1 1
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
    
}
int main()
{
    int x = 3;
    fun(x);
    return 0;
}