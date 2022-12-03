/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    char str[] = "nayan";
    int i=0,j=0,flg=0;
    while(str[j] != '\0')
    {
        j++;
    }
    j=j-1;
    while(i<j)
    {
        if(str[i] != str[j])
        {
            flg=1;
            break;
        }
        i++;
        j--;
    }
    if(flg)
    {
        cout<<"Not Palindrome...";
    }
    else
    {
        cout<<"Palindrome...";
    }

    return 0;
}