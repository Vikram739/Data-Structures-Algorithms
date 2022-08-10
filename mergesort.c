/*
    Created By : Vikram Markali
*/

#include <stdio.h>

int n;
int a[1000];
int b[1000];

//merging elements after sorting...
void merge_data(int low, int mid, int high) 
{
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) 
   {
      if(a[l1] <= a[l2])
      {
         b[i] = a[l1];
         l1++;
      }
      else
      {
         b[i] = a[l2++];
      }
   }
   
   while(l1 <= mid)    
   {
      b[i] = a[l1];
      i++;
      l1++;
   }

   while(l2 <= high)   
   {
      b[i] = a[l2];
      i++;
      l2++;
   }

   for(i = low; i <= high; i++)
   {
      a[i] = b[i];
   }
}

//sorting function...
void sort(int low, int high) 
{
   int mid;
   
   if(low < high) 
   {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merge_data(low, mid, high);
   } 
   else 
   { 
      return;
   }   
}

int main() 
{ 
   int i;
   // get input from user....
   printf("Enter size of Elements: ");
   scanf("%d",&n);
   printf("Enter %d Elements: ",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }

   // before sorting...
   printf("Before sorting:\t");
   for(i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }

   sort(0, n);

   // after sorting...
   printf("\nAfter sorting:\t");
   for(i = 1; i <= n; i++)
   {
      printf("%d ", a[i]);
   }
}