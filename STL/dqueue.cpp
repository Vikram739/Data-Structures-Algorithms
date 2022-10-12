/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    deque <int> d;
    cout<<"Initial size: "<<d.size();
    
    d.push_back(10);
    d.push_front(20);
    d.push_front(30);
    cout<<"\nElement at 1: "<<d.at(1);
    cout<<"\nElement at front: "<<d.front();
    cout<<"\nElement at back: "<<d.back();
    cout<<"\nDeque is empty or not: "<<d.empty();

    cout<<"\nBefore...Size of deque: "<<d.size();
    d.erase(d.begin(),d.begin()+1);
    cout<<"\nAfter...Size of deque: "<<d.size();

    cout<<"\nDeque: ";
    for(auto i:d)
    {
        cout<<i<<" ";
    }

    
    return 0;
}