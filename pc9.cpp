#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int a;
    int b;
    int c;
    float delta;
    float x1;
    float x2;
    float x3;


    cout << "Denklemin a katsayisi ne olsun ? : \n";
    cin >> a;
    cout << "Denklemin b katsayisi ne olsun ? : \n";
    cin >> b;
    cout << "Denklemin c sayisi ne olsun ? : \n";
    cin >> c;

    delta = pow(b, 2) -4*a*c;
    x1 = (-1*b + sqrt(delta)) / 2*a;
    x2 = (-1*b - sqrt(delta)) / 2*a;
    x3 = -1*b / a;

    if (delta > 0)
    {
        cout << "Denklemin iki kökü vardir : \n";
        cout << " x1 : \n" << x1;
        cout << "x2 : \n" << x2;
    }
    else if (delta == 0)
    {
        cout << "Denklemin çakişiktek kökü vardir : \n";
        cout << x3;
    }
    else if (delta < 0)
    {
        cout << "Denklemin kökü yoktur \n";
    }
    else
    {
        cout << "Normal şartlarda bunu yapmak imkansiz ama yaptiysen aptalsin";
    }
}
