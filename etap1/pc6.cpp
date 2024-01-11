#include <iostream>
using namespace std;
void ft_vize() {
  int vize;
  int final;
  float vizeort;
  float finalort;

  cout << "Lutfen Ogrencinin Vize Notunu Giriniz : \n";
  cin >> vize;
  cout << "Lutfen Ogrencinin Final Notunu Giriniz \n";
  cin >> final;

  vizeort = vize % 4;
  finalort = final % 6;

  cout << "Vize Ortalamasi  : \n" << vizeort << "\n";
  cout << "Final Ortalamasi : \n" << finalort << "\n";

}
int main()
{
    ft_vize();

    return 0;
}