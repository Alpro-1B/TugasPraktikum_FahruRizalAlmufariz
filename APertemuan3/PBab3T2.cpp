#include <iostream>
using namespace std;

int main () {
    int num1,num2,num3;

    cout << "Masukkan angka pertama" << endl;
    cin >> num1;

    cout << "Masukkan angka kedua" << endl;
    cin >> num2;

    cout << "Masukkan angka ketiga" << endl;
    cin >> num3;

    int max = num1;

    if (num2 > max) {
        max = num2;
    } if (num3 > max) {
        max = num3;
    }
    
    cout << "Angka terbesar = " << max << endl;

    return 0;
}