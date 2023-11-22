#include <iostream>
using namespace std;
#include <math.h>

void ft_polat(void){
    int a;
    int b;
    int c;
    int x1;
    int x2;
    int x3;
    int delta;

    cout << "Lutfen denklemin a katsayisini giriniz \n";
    cin >> a;
    cout << "Lutfen denklemin b katsayisini giriniz \n";
    cin >> b;
    cout << "Lutfen denklemin c sayisini giriniz \n";
    cin >> c;

    delta = pow(b,2) -4*a*c ;
    x1 = (-1*b + sqrt(delta)) / 2*a ;
    x2 = (-1*b - sqrt(delta)) / 2*a ;
    x3 = -1*b / 2*a;
    
    if (delta > 0)
    {
        cout << "Denklemin iki koku vardir \n";
        cout << x1 << "\n";
        cout << x2 << "\n";
    }
    else if (delta == 0)
    {
        cout << "Denklemin çakişik bir kökü vardir";
        cout << x3;
    }
    else if (delta < 0)
    {
        cout << "Denklemin koku yoktur";
    }
    else
        cout << "Normal koşullarda bu fonksiyonu elseye  sokayamazssin hadi diyelim soktun o zaman sana şöyle diyim polat maldir";
    
}
int main () {
    ft_polat ();

    return 0 ;
}