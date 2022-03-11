#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the last number:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout<<"The sum of the first "<< n <<" numbers is: "<< sum << endl;
    
    return 0;
}
