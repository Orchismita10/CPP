#include <iostream>

using namespace std;

int main()
{
    double a;
    cout<<"Enter the first term:";
    cin>>a;
    double d;
    cout<<"Enter the common difference:";
    cin>>d;
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    double sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    cout<< "Sum of Given AP Series: "<< sum;
    
    return 0;
}
