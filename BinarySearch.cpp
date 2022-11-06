/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};
 void Display(struct Array arr)
 {
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
 }
void swap(int *x,int *y)
 {
    int temp=*x;
    *x=*y;
    *y=temp;
 }
int BinarySearch(struct Array arr,int key)
{
    int l,h,m;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        m = (l+h)/2;
        if(arr.A[m] == key)
        {
            return m;
        }
        else if(key<arr.A[m])
        {
            h = m-1;
        }
        else
        {
            l = m+1;
        }
    }
    return -1;
}

int RBinarySearch(struct Array arr,int l,int h,int key)
{
    int m;
    if(l<=h)
    {
        m = (l+h)/2;
        if(key == arr.A[m])
        {
            return m;
        }
        else if(key < arr.A[m])
        {
            return RBinarySearch(arr,l,m-1,key);
        }
        else
        {
            return RBinarySearch(arr,m+1,h,key);
        }
    }
    return -1;
}
int main()
{
    struct Array arr1={{2,3,9,16,18,21,28,32},10,8};
    printf("%d",BinarySearch(arr1,9));
    printf("%d",RBinarySearch(arr1,0,arr1.length-1,16));
    Display(arr1);
    return 0;
}