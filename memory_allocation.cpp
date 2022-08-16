/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Dynamically memory allocation using c and c++
int main()
{
    int *p;
    // p = (int*)malloc(sizeof(int)*5);
    // printf("%d",sizeof(p));

    p = new int[5];
    cout<<sizeof(p);
    return 0;
}