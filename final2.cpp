#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int b, kat;
    int c[4][4] = {{1,1,2,3},{2,4,5,6},{3,7,8,9},{4,10,11,12}};

    cout << "Kaçinci katta dairniz ? \n";
    cin >> kat;
    cout << "Dairenizin no'su kaç? \n";
    cin >> b;

    cout <<"Dairenizinin numarasi: \n"<< c[kat][b];
}
