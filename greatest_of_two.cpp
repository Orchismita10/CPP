#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, great;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a>b)
    {
        great=a;
    }
    else
    {
        great=b;
    }
    cout<< great << " is the greater number.";

    return 0;
}
