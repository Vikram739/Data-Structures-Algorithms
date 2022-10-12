/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    list<int> l = {1,2,3};
    cout<<"size before: "<<l.size()<<endl;

    list<int> n(3,500);
    for(auto i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.swap(n);
    n.sort();
    for(auto i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(5);
    l.push_back(6);
    l.push_front(0);
    l.sort();
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<"\nsize after: "<<l.size()<<endl;

    // l.reverse();
    // cout<<"after reverse..."<<endl;
    cout<<"first element: "<<l.front()<<endl;
    cout<<"last element: "<<l.back()<<endl;

    l.pop_back();
    l.pop_front();

    l.erase(l.begin());
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    return 0;
    
}