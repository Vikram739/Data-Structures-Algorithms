/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    char str[] = "vikram";
    int i=0;
    while(str[i] != '\0')
    {
        str[i] -= 32;   //subtracting 32 for coverting a string from lowercase to uppercase...
        i++;          
    }
    cout<<"Uppercase: "<<str;
    return 0;
}