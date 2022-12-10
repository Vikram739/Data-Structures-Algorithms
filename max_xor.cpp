/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

void solve()
{
    string first;
    cin>>first;
    string second;
    cin>>second;

    int c1=0,c2=0;
    for(int i=0;i<first.length();i++)
    {
        if(first[i] == '0')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for(int i=0;i<second.length();i++)
    {
        if(second[i] == '0')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    int jadu = min(c1,c2);
    string res = "";
    for(int i=0;i<jadu;i++)
    {
        res += '1';
    }
    for(int i=jadu;i<first.length();i++)
    {
        res += '0';
    }
    cout<<res<<endl;
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}