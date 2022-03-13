#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout<<" Enter the number: ";
    cin>>num;
    int n=0, sqr, temp, last;
    sqr = num*num;  
    temp = num;
    while(temp>0)
    {
        n++;
        temp = temp/10;
    }
    int den = floor(pow(10,n));
    last = sqr % den;
    if(last == num)
    {
        cout<<num<<" is an Automorphic number. ";
    }
    else
    {
        cout<<num<<" is not an Automorphic number. ";
    }
    
    return 0;
}
