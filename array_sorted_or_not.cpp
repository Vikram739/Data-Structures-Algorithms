/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    int mortal[] = {10,20,30,60,50};
    int len = sizeof(mortal) / sizeof(int);
    int flg=0;

    // checking for acending order...
    for(int i=0;i<len-1;i++)
    {
        if(mortal[i] > mortal[i+1])
        {
            flg=1;
        }
    }
    if(flg == 1)
    {
        cout<<"Not sorted..."<<endl;
    }
    else
    {
        cout<<"Sorted...."<<endl;
    }

    return 0;
}