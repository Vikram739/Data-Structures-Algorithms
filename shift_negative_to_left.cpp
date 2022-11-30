/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    int mortal[] = {-6,3,-8,10,5,-7,-9,12,-4,2};
    int len = sizeof(mortal) / sizeof(int);
    int temp=0;
    cout<<len<<endl;
    int i=0,j=len-1;
    while(i<j)
    {
        while(mortal[i]<0){i++;}
        while(mortal[j]>=0){j--;}

        if(i<j)
        {
            temp = mortal[i];
            mortal[i] = mortal[j];
            mortal[j] = temp;
        }
    }
    cout<<"After Seperation: ";
    for(int i=0;i<len;i++)
    {
        cout<<mortal[i] <<" ";
    }
    return 0;
}