/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

template<class T>   // defining class as Generic...
class Rectangle
{
    private:
        T length;
        T breadth;
    
    public:
        Rectangle(T l,T b)
        {
            this->length = l;
            this->breadth = b;
        }

        T area()
        {
            T c;
            c = this->length * this->breadth;
            return c;
        }
};
int main()
{
    Rectangle<int> r1(10,5);
    Rectangle<float> r2(10,1.5);
    printf("\nArea of Rwctangle: %d",r1.area());
    printf("\nArea of Rwctangle: %f",r2.area());
    return 0;
}