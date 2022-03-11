#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout<< "Enter the lower limit:";
    cin>> start;
    cout<< "Enter the upper limit:";
    cin>> end;
    cout<< "Prime numbers between "<< start << " and " << end << " are: ";
    int c = 0;
    for (int i = start; i <= end; ++i)
    {
        if (start % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << start;
       ++start;
    }
    cout << endl;
    
    return 0;
}
