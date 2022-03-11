#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be checked:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
        sum = sum + i;
    }
    if( sum == n )
    {
        cout << n << " is a Perfect number.";
    }
    else
    {
        cout << n << " is not a Perfect number.";
    }

    return 0;
}
