#include <iostream>
using namespace std;

void ft_hesaplama(void){
  int vize;
  int final;
  float ortalama;

  cout << "Lutfen oğrencinin vize notunu giriniz \n";
  cin >> vize;
  cout << "Lutfen oğrencinin final notunu girniz \n";
  cin >> final;
  
  ortalama = vize * 0.4 + final * 0.6;
  cout << "Öğrencinin ortalamasi :\n" << ortalama;
}

int main(void){
  ft_hesaplama();

  return 0;
}