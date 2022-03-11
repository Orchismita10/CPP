#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be checked:";
    cin >> n;
    int count=0, power, digit, r, sum=0;
    int num = n;
    while( num!=0 )
    {
        num = num/10;
        count++;
    }
    power=count;
    while(num>0)
    {
        digit = num%10;
        r = pow(digit,power);
        sum = sum+r;
        num= num/10;
    }
    if( sum == n )
    {
        cout << n << " is an Armstrong number. ";
    }
    else
    {
        cout << n << " is not an Armstrong number. ";
    }

    return 0;
}
