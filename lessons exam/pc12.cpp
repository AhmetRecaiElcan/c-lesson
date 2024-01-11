#include <iostream>
using namespace std;

int main(void){
    int plaka;

    cout << "Lutfen bir plaka giriniz \n";
    cin >> plaka;
    switch (plaka)
    {
        case 70:
        cout << "Karaman plakasidir";
        break;
    
    default:
        cout << "Farkli bir plakadir";
        break;
    }

}