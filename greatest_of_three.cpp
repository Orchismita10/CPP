#include <iostream>

using namespace std;

int main()
{
    double a, b, c, great;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
	if (a > b && a > c) 
	{
		great=a;
	}
	else if (b > a && b > c) 
	{
		great=b;
	}
	else 
	{
		great=c;
	}
    cout<< great << " is the greatest number.";

    return 0;
}
