/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    // max heap...
    priority_queue<int> maxi;
    cout<<"initial size: "<<maxi.size();

    maxi.push(10);
    maxi.push(40);
    maxi.push(20);
    maxi.push(30);

    cout<<"\nTop element: "<<maxi.top();

    int n = maxi.size();
    cout<<"\nPriority Queue maxi: ";
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<"\nlast size: "<<maxi.size();

    cout<<"\n\n";


    // min heap...
    priority_queue<int, vector<int> , greater<int> > mini;

    mini.push(40);
    mini.push(10);
    mini.push(20);
    mini.push(30);

    cout<<"\nTop element: "<<mini.top();

    int m = mini.size();
    cout<<"\nPriority Queue mini: ";
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<"\nlast size: "<<maxi.size();



    return 0;
}