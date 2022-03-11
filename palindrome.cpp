#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to be checked:";
    cin>>n;
    int num=n, digit, rev=0;
    do
    {
        digit= num%10;
        rev = (rev*10)+digit;
        num = num/10;
    } while(num != 0);
    if(rev ==n)
    {
        cout<< n << " is Paindrome.";
    }
    else
    {
        cout<< n << " is not Palindrome.";
    }

    return 0;
}
