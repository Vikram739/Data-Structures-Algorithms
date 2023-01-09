/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    // It stores unique values( no duplicates)...and returns in acending order(internally implements min heap)...
    set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(20);
    s.insert(50);

    for(auto i: s)
    {
        cout<<i<<" ";
    }
    return 0;
}