#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout<< "Enter the lower limit:";
    cin>> start;
    cout<< "Enter the upper limit:";
    cin>> end;
    cout<< " Palindrome numbers between "<< start << " and " << end << " are: ";
    int i;
    for( i = start; i <= end; i++){
        int num = i, rev=0;
        do{
            int digit = num%10;
            rev = (rev*10)+digit;
            num/=10;
        }while(num != 0);
        if(rev == i){
            cout<< i << endl;
        }
    }

    return 0;
}
