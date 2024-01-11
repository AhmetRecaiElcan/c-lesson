#include <iostream>
using namespace std;

void ft_hesap(void){
  float vize;
  float final;
  float ortalama;

  cout << "Lutfen ögrencinin vize notunu giriniz : \n";
  cin >> vize;
  cout <<  "Lutfen öğrencinin final notunu giriniz : \n";
  cin >> final;
  
  ortalama = vize * 0.4 + final * 0.6;

  cout << "Öğrencinin ortalamasi :" << ortalama;
}

int main(void){
  ft_hesap();

  return 0;
}