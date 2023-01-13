/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;


// C++ program to find total bit in given number

unsigned countBits(unsigned int number)
{    
    
    // log function in base 2
    // take only integer part
    return (int)log2(number)+1;
}

int main()
{
    unsigned int num = 65;
    std::cout<<countBits(num)<<'\n';
    return 0;
}