#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double g, h, i;
    cout << "enter the length  g: ";
    cin >> g;

    cout << "enter the length h: ";
    cin >> h;

    cout << "enter the length i: ";
    cin >> i;

    double s = (g + h + i) / 2;
    
    double area = sqrt(s * (s - g) * (s - h) * (s - i));
    cout << "the triangle area is: " << area << endl;
  
    return 0;
}
