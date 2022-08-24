#include <stdio.h>
#include <string.h>

int fu(int *marks,int n,char gender);

int main()
{
  int n, sum = 0;
  char gender;
  printf("enter how many STUDENT:");
  scanf("%d", &n);
  int marks[1000];
  printf("\nenter marks ::");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &marks[i]);
  }
  printf("\nenter gender of student::");
  scanf("%c ", &gender);
  int res=fu(marks,n,gender);
  printf("%d",res);
}
int fu(int *marks,int n,char gender)
{ 
    int bsum=0,gsum=0;
  for (int i = 0; i < n; i++)
  {
    if (i%2==1)
      bsum = bsum + marks[i];
    else
      gsum = gsum + marks[i];
  }

  if(gender == 'b')
  return gsum;
  else
  return bsum;
}