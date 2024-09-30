
                                                    // selection sort algorithm

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int arr[]={
        34,45,56,67,34,32,45,34,34,2
    };
    int size =  sizeof (arr) / sizeof(arr[0]);
    

    
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i]  > arr[j])
            {
                min = j;
            }
            
        }
        
        

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
    



	
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}