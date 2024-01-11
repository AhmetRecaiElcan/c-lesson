    void ft_ahmet(){
        int
        
        char cevap;

        cout << "Yarrami yalamak istermisin ? \n";
        cin >> cevap ;

        switch (cevap) {
            case 'A':
            cout << "Posta başarili /n";
            break;
            case 'B':
            cout << "olmadı";
            default:
            cout << "olmadı";
        }
    // Swith case = yapısında sadece int ve char değişkenleri ile işlem yapılır string olmaz...
    }
