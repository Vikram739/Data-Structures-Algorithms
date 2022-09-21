/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#include<vector>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    vector <int> v;
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size();  

    // push_back()...

    v.push_back(10);
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size();  

    v.push_back(20);
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size(); 

    v.push_back(30);
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size(); 

    cout<<"\n Vector v: ";
    for(int i:v)
        cout<<i<<" ";

    vector <int> a(5,1);
    cout<<"\n Vector a: ";
    for(int i:a)
        cout<<i<<" ";

    // copy vector in other vector...
    vector <int> v2(v);
    cout<<"\n Vector v2: ";
    for(int i:v2)
        cout<<i<<" ";


    // pop_back()...

    v.pop_back();
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size(); 

    v.pop_back();
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size(); 

    v.pop_back();
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size(); 
    return 0;


    // crear() the vector

    v.clear();
    cout<<"\n After clear() Size: "<<v.size();

    
}