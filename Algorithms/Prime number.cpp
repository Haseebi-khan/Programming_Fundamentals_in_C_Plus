#include <iostream>

using namespace std;

bool primenum(int number){
    if (number <= 1)   
    {
        return false;
    }
    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
            return false;
    }
    return true;
    
    
}

int main()
{
    
    int number;
    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter the numbers";
        cin >> number;
        primenum(number);

        if (primenum(number))
        {
            cout << "Number is Prime number";
        }
        else{
            cout << "number is not prime";
        }
        

    }

    
    
    return 0;
}