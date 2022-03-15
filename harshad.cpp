#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be checked:";
    cin >> n;
	int num = n, sum = 0;
	while (num!=0) 
	{
		sum += num % 10;
		num /= 10;
	}
	if (n % sum == 0) 
	{
		cout << n << " is a Harshad Number." << "\n";
	}
	else 
	{
		cout << n << " is not a Harshad Number." << "\n";
	}

    return 0;
}
