#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev=0;
    do
    {
        int digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }while(n!=0);
    cout<<"The reverse of the number is: "<<rev;

    return 0;
}
