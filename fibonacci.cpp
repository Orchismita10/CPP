#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    int a = 0, b = 1;
    cout << a << ", " << b << ", ";
    int c = a + b;
    while(c<=n)
    {
        cout << c << ", ";
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}
