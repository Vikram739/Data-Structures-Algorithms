#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;
// array always passed by address....
void xxx(int a[])
{
    a[0] =100;

}
int main()
{
    int arr[] = {10,20,30,40,50};
    int i;
    printf("Before Calling: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    xxx(arr);
    printf("\nAfter Calling: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}