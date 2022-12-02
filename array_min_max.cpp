/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    int arr[] = {6,7,8,10,11,12,13,18,15,2};
    int n = sizeof(arr)/sizeof(int);
    int min,max;
    min = arr[0];
    max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;

    return 0;
}