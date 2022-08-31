/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    int x = 5;
    cout<<"Factorial: "<<fact(x);
    return 0;
}