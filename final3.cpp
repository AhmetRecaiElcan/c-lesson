#include <iostream>
using namespace std;

int main(){
    string kullanici = "A";
    string şifre = "B";
    string ad;
    string passwoard;

    while(true){
        cout << "Lutfen kullanici adini giriniz : \n";
        cin >> ad;
        cout << "Lutfen Şifrenizi giriniz : \n";
        cin >> passwoard;

        if(kullanici != ad){
            cout << "Kullinici adin yanliş \n";
        }
        else if(şifre != passwoard){
            cout << "şifreniz yanliş \n";
        }
        else if(kullanici == ad && şifre == passwoard){
            cout << "Basarili bir sekilde giris yaptiniz \n";
            return 0;
        }
    }   
}