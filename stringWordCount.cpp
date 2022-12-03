/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    char str[] = "How are you?    Vikram";
    int i=0,word=0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i-1] != ' ')  //extra condition is added cause of white spaces between 3 and 4 word...
        {
            word++;
        }
        i++;          
    }
    cout<<"Word Count: "<<word+1;
    return 0;
}