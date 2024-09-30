#include <iostream>

using namespace std;

template <typename T> T graternumbers(T num1, T num2)
{
    if (num1 < num2)
    {
        return num1;
    }else{
        return num2;
    }
    
}

int main()
{
    cout << "Enter the numbers: ";
    int num1,num2;
    cin >> num1 >> num2;
    cout<< "output"<<endl;

    cout << graternumbers<int>(num1,num2)<<endl;
    cout << graternumbers<double>(num1,num2)<<endl;
    cout << graternumbers<char>(num1,num2)<<endl;
    
    return 0;
}