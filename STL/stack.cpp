/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    stack <int> s;

    cout<<"Initial size: "<<s.size();
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"\nstack size: "<<s.size();
    cout<<"\nTop of stack: "<<s.top();
    s.pop();
    cout<<"\nTop of stack: "<<s.top();
    
    cout<<"\nsize after pop: "<<s.size();
    cout<<"\nempty or not: "<<s.empty();


    // string stack....
    stack <string> ss;
    ss.push("vikram");
    ss.push("omkar");
    ss.push("dip");

    cout<<"\nTop: "<<ss.top();
    ss.pop();
    cout<<"\nTop: "<<ss.top();
    return 0;
}