#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<" Enter the number: ";
    cin>>n;
    int power;
    cout<<" Enter the power: ";
    cin>>power;
    int result=1;
    for (int i = 0; i < power ; i++) 
    {
		result = result * n;
    }
    cout <<n<<" raised to the power "<<power<<" is: "<<result;

    return 0;
}
