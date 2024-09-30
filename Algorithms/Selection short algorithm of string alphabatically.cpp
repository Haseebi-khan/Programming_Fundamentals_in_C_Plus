#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int size = 6;
    string names[size] = {
        "haseeb", "faheem", "noman", "abas", "raiz", "owais"
    };


    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (names[j] < names[min])
            {
                min = j;
            }
            
        }

        if (min != i)
        {
            string temp = names[i];
            names[i] = names[min];
            names[min] = temp;
        }

        

    }
    
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " ";
    }
    
    
    return 0;
}