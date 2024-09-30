#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

string randomcolour(){
    string colours[5] ={
        "red","green","yellow","black","blue"
    };
    int randindex = rand()% 5;
    return colours[randindex];

}

int main()
{
    cout << "wellcom to game:\n";
        int countusec = 0;

    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        string selectedcolour = randomcolour();
        cout << "Guess\n";
        string guess;
        cin >> guess;

        cout << "the selected colour was " << selectedcolour <<endl;
        if (guess == selectedcolour)
        {
            cout << "correct";
            countusec++;
        }else
        {
            cout << "Incorrect.";
        }
    }

    cout << "You guessed the correct color " << countusec << " out of 5 times.\n";


    



    
    return 0;
}