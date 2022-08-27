/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Head Recursion 
void fun(int n)
{
 if(n>0)
 {
    fun(n-1);
    printf("%d ",n);
 }
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}


