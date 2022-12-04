/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;
int cnt=0;
void perm(string& str,int l,int h)
{
    if(l == h)
    {
        cout<<str<<endl;
        cnt++;
    }
    else
    {
        for(int i=l;i<=h;i++)
        {
            swap(str[l],str[i]);
            perm(str,l+1,h);
            swap(str[l],str[i]);
        }
    }
}
int main()
{
    string s = "ABCD";
    int len = s.size();
    // cout<<len;
    perm(s,0,len-1);
    cout<<"Total Possible Strings: "<<cnt;      //(len)! strings are possible...
    return 0;
}