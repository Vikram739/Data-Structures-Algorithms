/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    char temp;
    char str[] = "vikram";
    int i=0,j=0,flg=0;
    while(str[j] != '\0')
    {
        j++;
    }
    j=j-1;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
        i++;
        j--;
    }
    
    cout<<"Reversed String: "<<str;
    return 0;
}