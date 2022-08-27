/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Tail Recursion...
void fun(int n)
{
 if(n>0)
 {
    printf("%d ",n);
    fun(n-1);
 }
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}