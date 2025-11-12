#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "enter a score (0-100): ";
    cin >> score;

    // Girilen puanın 0-100 aralığında olup olmadığını kontrol edelim
    if (score < 0 || score > 100) {
        cout << "Hata: Lütfen 0 ile 100 arasında bir puan girin." << endl;
        return 0; // Programı sonlandır
    }

    // switch, puanı 10'a bölerek (tam sayı bölmesi) sonucu kontrol eder.
    switch (score / 10)
    {
        // 90-100 Puan Aralığı için A
        case 10: // 100 / 10 = 10
        case 9:  // 90-99 / 10 = 9
            cout << "Harf Notu: A" << endl;
            break;
            
        // 80-89 Puan Aralığı için B
        case 8:
            cout << "Harf Notu: B" << endl;
            break;

        // 70-79 Puan Aralığı için C
        case 7:
            cout << "Harf Notu: C" << endl;
            break;

        // 60-69 Puan Aralığı için D
        case 6:
            cout << "Harf Notu: D" << endl;
            break;

        // 0-59 Puan Aralığı için F (0'dan 5'e kadar olan tüm caseleri birleştirir)
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "Harf Notu: F (Kaldı)" << endl;
            break;
        
        // Bu default'a normalde 0-100 aralığı kontrol edildiği için düşülmez, 
        // ancak ek bir güvenlik katmanıdır.
        default: 
             cout << "Beklenmedik bir hata oluştu." << endl;
             break;
    }

    return 0;
}