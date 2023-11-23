#include <iostream>
using namespace std;

void ft_polat(){
    int i;
    int j;
    int paket;

    cout << "Kac kutu maden suyu olsun ? \n";
    cin >> paket;

    for ( i = 1; i <= paket; i++)
    {
        for ( j = 1; j <= 6; j++)
        {
            cout << j << "\n";
        }
        cout << "paket bitti yeni paket hazirlaniyor... \n";
    }
    cout << "Tum paketler bitti makineyi kapatin";   
}
int main(){
    ft_polat();
    return 0;
}