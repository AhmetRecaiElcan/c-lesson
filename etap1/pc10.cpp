#include <iostream>
using namespace std;

void ft_pc(void){
    int paket;
    int i;
    int kutu = 6;


    cout << "Kac Paket Maden Suyu Paketlenmesini Istersiniz ?  \n";
    cin >> paket;

    for (i = 1; i <= kutu; i++)
    {
        cout << i << "\n";
    }
    
}
int main(void){
    ft_pc();

    return 0;
}