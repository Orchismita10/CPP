#include <iostream>

using namespace std;

int main()
{
    double a, b, great;
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
