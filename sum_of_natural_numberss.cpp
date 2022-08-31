/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int sum(int n)
{   
    return n*(n+1)/2;
}
int main()
{
    int x = 100;
    cout<<"Sum: "<<sum(x);
    return 0;
}