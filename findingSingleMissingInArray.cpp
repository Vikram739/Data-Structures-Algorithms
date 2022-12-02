/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    int arr[] = {6,7,8,10,11,12,13,14,15};
    int n = sizeof(arr)/sizeof(int);
    int diff = arr[0]-0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i != diff)
        {
            cout<<"Missing Element: "<<diff+i;
            break;
        }
    }
    return 0;
}