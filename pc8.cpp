#include <iostream>
using namespace std;

int main(void){
    int vize;
    int final;
    string isim;
    string soyisim;
    float ortalama;

    cout << "Lutfen ogrencinin ismini giriniz : \n";
    cin >> isim ;
    cout << "Lutfen ogrencinin soyismini giriniz : \n";
    cin >> soyisim;
    cout << "Lutfen ogrencinin vize notunu giriniz : \n";
    cin >> vize;
    cout << "Lutfen ogrencinin final notunu giriniz : \n";
    cin >> final;

    ortalama = (vize * 0.4) + (final * 0.6);

    cout << "Isim : \n" << isim;
    cout << "Soyisim : \n" << soyisim;
    cout << "Ortalama \n" << ortalama;

}