#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words[]={
        "good", "fellow", "well", "potenial", "jump", "phone", "Computer"
    };

    int size = sizeof(words) / sizeof(words[0]);
    
    bool swap;
    string temp;

    do
    {
        swap =false;
        for (int i = 0; i < size - 1; i++)
        {
            if (words[i].length() > words[ i + 1 ].length())
            {
                swap = true;
                temp = words[i];
                words[i] = words[i + 1];
                words[i + 1] = temp;
            }
            
        }
        
    } while (swap);
    

    for (int i = 0; i < size; i++)
    {
        cout << words[i] << " ";
    }
    


    
    return 0;
}