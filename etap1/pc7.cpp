#include <iostream>
using namespace std;

void ft_toplam(void){
  int sayi;
  int i;
  int toplam;

  cout << "Kaca Kadar Olan Cift Sayilari Toplamasini Istiyorsunuz ? :" << "\n";
  cin >> sayi;

  for (i = 0; i <= sayi; i+=2 )
  {
    toplam += i;
    
  }
  cout << "Toplam = " << toplam;
}
int main(){
  ft_toplam();
  
  return (0);
}