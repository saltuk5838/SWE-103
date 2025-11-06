#include <iostream>
using namespace std;

int main() {
    int choice, count = 0;
    double total = 0, price;
    
    cout << "1. Coffee - 150 TL\n2. Tea - 25 TL\n3. Juice - 80 TL\n0. Exit\n";
    
    while (true) {
        cout << "\nSecim: ";
        cin >> choice;
        
        if (choice == 0) break;
        
        if (choice == 1) price = 150;
        else if (choice == 2) price = 25;
        else if (choice == 3) price = 80;
        else continue;
        
        count++;
        if (count >= 5) price = price * 0.9;
        total = total + price;
    }
    
    cout << "\nToplam: " << total << " TL\n";
    
    return 0;
}
