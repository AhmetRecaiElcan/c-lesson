#include <iostream>
using namespace std;
void ft_vize() {
  float vize;
  float final;
  int vizeort;
  int finalort;

  cout << "Lütfen Öğrencinin Vize Notunu Giriniz";
  cin >> vize;
  cout << "Lütfen Öğrencinin Final Notunu Giriniz";
  cin >> final;

  vizeort = (int)vize % 4;
  finalort = (int) final % 6;

  cout << "Vize Ortalamasi" << vizeort;
  cout << "Final Ortalamasi" << finalort;

}
int main(){
    cout << ft_vize;
}