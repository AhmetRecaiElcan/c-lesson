   #include <iostream>
   using namespace std;
   
    void ft_ahmet(){
        
        int cevap;

        cout << "Dondurmayı yalamak istermisin ? \n";
        cin >> cevap;

        switch (cevap) {
            case 1:
            cout << "Yalama başarili \n";
            break;
            case 2:
            cout << "olmadikiine \n";
            break;
            default:
            cout << "olmadi";
        }
    // Swith case = yapısında sadece int ve char değişkenleri ile işlem yapılır string olmaz...
    }
int main()
{
    ft_ahmet();
}