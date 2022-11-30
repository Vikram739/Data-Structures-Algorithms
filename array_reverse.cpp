/*
    Created By : Vikram Markali
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp=0;
    int mortal[] = {10,20,30,40,50};
    int len = sizeof(mortal) / sizeof(int);
    cout<<mortal[1]<<endl;
    for(int i =0,j=len-1;i!=j;i++,j--)
    {
        temp = mortal[i];
        mortal[i] = mortal[j];
        mortal[j] = temp;
    }

    for(int i=0;i<len;i++)
    {
        cout<<mortal[i]<<" ";    
    }
    return 0;
}