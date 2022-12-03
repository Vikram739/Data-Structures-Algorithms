/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    char str[] = "viKrAm";
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]>=65 && str[i]<91)     //toggle the case of string using ascii values
        {
            str[i] += 32;
        }
        else if(str[i] >= 97 && str[i]<123)
        {
            str[i] -= 32;
        }
        i++;          
    }
    cout<<"Toggled String: "<<str;
    return 0;
}