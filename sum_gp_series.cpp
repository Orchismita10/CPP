#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    cout<<"Enter the first term:";
    cin>>a;
    double r;
    cout<<"Enter the common ratio:";
    cin>>r;
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    double sum = (a*(pow(r,n)-1))/(r-1);
    cout<< "Sum of Given GP Series: "<< sum;

    return 0;
}
