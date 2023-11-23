#include <iostream>
using namespace std;

int main()
{
    int sayi1;
    int sayi2;
    int sonuc;
    string işlem;

    cout << "Lutfen bir sayi giriniz :";
    cin >> sayi1;
    cout << "Lutfen bir sayi giriniz :";
    cin >> sayi2;

    cout << "Lutfen bir islem seciniz (+,-,*,/) \n";
    cin >> işlem;

    if ( işlem == "+" )
    {
        sonuc = sayi1 + sayi2;
    }
    else if ( işlem == "-" )
    {
        sonuc = sayi1 - sayi2;
    }
    else if (işlem ==  "*" )
    {
        sonuc = sayi1 * sayi2;
    }
    else if (işlem == "/" )
    {
        sonuc = sayi1 / sayi2;
    }
    else
    {
        cout << "Bu işlemi yapman imkansiz helal olsun";
    }
    cout << "Sonuc : " << sonuc;
}