#include <iostream>
using namespace std;

void ft_polat(void){

  int paket;
  int i;
  int j;

  cout << "Kac paket maden suyu olsun? \n";
  cin >> paket;


  for (i = 1; i <= paket; i++) {
    for (j = 1; j <= 6; j++) {
      cout << j ;
    }
    
    cout << "\n" << "Paket bitti, yeni pakete geciliyor. \n" ;
  }
}

int main(void){
    ft_polat();

    return 0;
}

