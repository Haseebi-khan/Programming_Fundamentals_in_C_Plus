#include <iostream>

using namespace std;

int main()
{
    int number[] = {
        34,45,56,43,12,87,8,0,43,23
    };

    int size = sizeof(number)/sizeof(number[0]);


    int first = 0,
        last = size - 1,
        middle,
        index, 
        value;
    bool found = false;

    int search = 8;


    while (!found && first <= last)
    {
        middle = (first + last)/2;
        
        if (number[middle] == search)
        {
            found = true;
            index = middle;
            value = number[middle];
        }else if(number[middle] > search)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }
    
    
    if (!found)
    {
        cout << "NOT FOUND.";
    }
    else
    {
        cout << "The  Index is: " << index << ", The value in the index is: "<< value;
    }
    
    return 0;
}