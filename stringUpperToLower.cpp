/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    char str[] = "VIKRAM";
    int i=0;
    while(str[i] != '\0')
    {
        str[i] += 32;   //adding 32 for coverting a string from uppercase to lowercase...
        i++;          
    }
    cout<<"Lower case: "<<str;
    return 0;
}