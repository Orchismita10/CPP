int main()
{
    int num;
    cout << "Enter the number to be checked:";
    cin >> num;
    int temp=0;
    for(int i=2; i<=(num/2); i++)
    {
        if(num%i==0)
        {
            cout << num << " is not Prime.";
            temp=1;
            break;
        }
    }
    if( temp == 0)
    {
         cout << num << " is Prime." << endl; 
    }

    return 0;
}
