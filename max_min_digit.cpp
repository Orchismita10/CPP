#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int min=9, max=0;
    while(n!=0)
    {
        int d=n%10;
           if(d<min)
           {
               min=d;
           }
           if(d>max)
           {
               max=d;
           }
        n=n/10;
    }
    
    cout<<"The minimum digit is: "<<min<<"\n"
        <<"The maximum digit is: "<<max;

    return 0;
}
