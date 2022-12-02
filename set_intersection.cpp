/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// all from both but same numbers only once...
int main()
{
    int a1[] = {2,9,5,10,21,28,35};
    int a2[] = {2,3,9,5,10,18,28};

    int m = sizeof(a1) / sizeof(int);
    int n = sizeof(a2) / sizeof(int);
    int ans[m+n];

    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a1[i] < a2[j])
        {
            i++;
        }
        else if(a2[j] < a1[i])
        {
            j++;
        }
        else
        {
            ans[k++] = a1[i++];
            j++;
        }
    }

    for(int i =0;i<k;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}