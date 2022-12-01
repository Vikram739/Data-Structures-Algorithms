/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    int a1[] = {3,8,16,20,25};
    int a2[] = {4,10,12,22,23};
    int m = sizeof(a1) / sizeof(int);
    int n = sizeof(a2) / sizeof(int);
    int ans[m+n];

    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a1[i] < a2[j])
        {
            ans[k++] = a1[i++];
        }
        else
        {
            ans[k++] = a2[j++];
        }
    }
    // inserting remaining elemnets...
    for(;i<m;i++)
    {
        ans[k++] = a1[i];
    }
    for(;j<n;j++)
    {
        ans[k++] = a2[j];
    }

    for(int i =0;i<m+n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}