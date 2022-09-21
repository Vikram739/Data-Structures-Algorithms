/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#include<array>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    // normal array...
    int normal[5] = {1,2,3,4,5};
    cout<<"Normal Array Element: "<<normal[2]<<endl;    //print 3

    // STL array....
    array <int , 5> m1 = {1,2,3,4,5};
    array <int , 5> m2 = {6,7,8,9,10};

    cout<<"Element at position 3: "<<m1.at(3)<<endl;
    cout<<"Size of array: "<<m1.size()<<endl;
    cout<<"Array is empty or not: "<<m1.empty()<<endl;  // Return boolean value...
    cout<<"Max size of array: "<<m1.max_size()<<endl;
    cout<<"First element of array: "<<m1.front()<<endl;
    cout<<"Last element of array: "<<m1.back()<<endl;
    // cout<<"Iterator at first position: "<<m1.begin()<<endl;
    // cout<<"Iterator at last position: "<<m1.end()<<endl;
    
    int size = m1.size();
    m2.fill(1);     // Now, m2 ={1,1,1,1,1}...
    cout<<"After fill m2 = ";
    for(int i;i<size;i++)
        cout<<m2[i]<<" ";
    cout<<endl;

    // swapping...
    m1.swap(m2);    // m1 and m2 swaped...

    cout<<"After Swapping m1 = ";
    for(int i;i<size;i++)
        cout<<m1[i]<<" ";
    cout<<endl;

    cout<<"After Swapping m2 = ";
    for(int i;i<size;i++)
        cout<<m2[i]<<" ";

    return 0;
}