#include <iostream>
using namespace std;

int main()
{
    int choice;
    double area;

    cout << "Pilih bentuk" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Pesegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan Pilihan (1/2/3)" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        double side;
        cout << "Masukkan Panjang Sisi Persegi" << endl;
        cin >> side;
        area = side * side;
        break;

    case 2:
        double length, width;
        cout << "Masukkan Panjang Persegi" << endl;
        cin >> length;
        cout << "Masukkan Lebar Persegi" << endl;
        cin >> width;
        area = length * width;
        break;

    case 3:
        double base, height;
        cout << "Masukkan Alas Segitiga" << endl;
        cin >> base;
        cout << "Masukkan Tinggi Segitiga" << endl;
        cin >> height;
        area = 0.5 * (base * height);
        break;

    default:
        cout << "Pilihan Tidak Valid" << endl;
        return 1;
    }

    cout << "Luas = " << area << endl;

    return 0;
}