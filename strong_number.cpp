#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<" Enter the number: ";
    cin>>n;
    int sum = 0, num=n;
    while(n != 0)
   {
        int digit = n% 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
   }
   if(sum==num)
   {
       cout<<num<<" is a Strong Number.";
   }
   else
   {
       cout<<num<<" is not a Strong Number.";
   }

    return 0;
}
