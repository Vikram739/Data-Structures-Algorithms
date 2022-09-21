/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

int main()
{
    // Static Array...
    int a[5] = {2,4,6,8,10};
    cout<<"Static Array: ";
    for(int i:a)
        cout<<i<<" ";

    // Dynamic Array...
    int *p;
    // p =(int *) malloc(5*sizeof(int));    //It's in c lang...
    p = new int(5);
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    cout<<"\nDynamic Array: \n";
    cout<<p<<endl;
    cout<<p[2]<<endl;
    cout<<p[4];
    return 0;
}