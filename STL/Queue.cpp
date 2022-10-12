/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    queue<string> q;
    cout<<"Initial size: "<<q.size();

    q.push("vikram");
    q.push("omkar");
    q.push("dip");

    cout<<"\nAfter insertion size: "<<q.size();
    cout<<"\nfirst: "<<q.front();
    cout<<"\nlast: "<<q.back();

    cout<<"\nempty or not: "<<q.empty();

    cout<<"\nQueue: ";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<"\nAfter pop size: "<<q.size();
    return 0;
}