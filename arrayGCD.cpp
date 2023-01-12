/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int arrayGCD(int mortal[],int n)
{
    int gcd=0;
    for(int i=0;i<n;i++)
    {
        gcd = __gcd(gcd,mortal[i]);
    }
    return gcd;
}
void display(int mortal[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<mortal[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int mortal[] = {10,20,30,40,50};
    cout<<"Array: ";
    display(mortal,5);
    return 0;
}