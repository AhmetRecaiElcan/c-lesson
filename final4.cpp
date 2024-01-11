#include <iostream>
using namespace std;
#include <math.h>

int main(){
    int x;
    int toplam = 0;
    int adet;
    int fiyat;
    int index;
    string ürünismi;

    cout << "Toplam kac urun var ? \n";
    cin >> x;

    for(index=0; index < x; index++){
        cout << "Urun ismini giriniz \n";
        cin >> ürünismi;
        cout << "Urun adedini giriniz \n";
        cin >> adet;
        cout <<"Urun fiyatini giriniz \n";
        cin >> fiyat;
        toplam =toplam + (adet * fiyat);
        cout << "Urun fiyati \n" << toplam <<"\n";
        
    }
   

    
}