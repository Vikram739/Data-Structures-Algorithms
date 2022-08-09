#include<stdio.h>

struct rect 
{
    int length;
    int breadth;
};

int main()
{
    struct rect r;
    printf("Enter lenth: ");
    scanf("%d",&r.length);
    printf("Enter breadth: ");
    scanf("%d",&r.breadth);

    printf("Area of Rectangle: %d",r.length*r.breadth);
    return 0;
}