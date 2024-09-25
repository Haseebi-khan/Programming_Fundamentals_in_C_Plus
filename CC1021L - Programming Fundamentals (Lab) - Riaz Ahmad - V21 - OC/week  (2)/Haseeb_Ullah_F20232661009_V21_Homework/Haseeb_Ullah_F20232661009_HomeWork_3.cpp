#include <iostream>

using namespace std;

int main()
{
    float eng,math,phy,comp,urdu,pakstudy;
    int sum;

    cout<< "Your English marks:" << "\n";
    cin>>eng;
    cout<< "Your Urdu marks:" << "\n";
    cin>>urdu;
    cout<< "Your Computer marks:" << "\n";
    cin>>comp;
    cout<< "Your Physics marks:" << "\n";
    cin>>phy;
    cout<< "Your Mathematics marks:" << "\n";
    cin>>math;
    cout<< "Your Pakistan study marks:" << "\n";
    cin>>pakstudy;



    sum = eng + math + phy + comp + urdu + pakstudy;

    cout<< "English + Urdu + Computer + Physics + Mathematics + Pakistan study\n";
    cout<< eng<<"   +    " << urdu << "    +    " << comp << "    +    " << phy << "    +    " << math << "    +    " << pakstudy<< "\n";
    cout<< "Total Mark:"<<sum;







    return 0;
}
