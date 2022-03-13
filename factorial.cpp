#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to find its factorial: ";
    cin>>n;
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<" The factorial of "<<n<<" is: "<<fact;

    return 0;
}
