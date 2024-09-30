#include <iostream>

using namespace std;

int main()
{
    int arr[]={
        435,546,32,4,8,97,6,2342,56,12,78, 65, 43,45
    };

    int size = sizeof(arr)/sizeof(arr[0]);

    bool swap;
    int temp;
    do
    {
        swap = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap = true;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        
    } while (swap);

    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}