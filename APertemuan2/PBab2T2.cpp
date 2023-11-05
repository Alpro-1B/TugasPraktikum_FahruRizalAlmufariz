#include <iostream>
using namespace std;

int main() {

    cout << "PERTUKARAN NILAI MENGGUNAKAN 2 VARIABEL" << endl;

    int firstValue = 10;
    int secondValue = 8;

    cout << "Nilai Awal" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue = " << secondValue << endl;

    //pertukaran
    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "Nilai Setelah Pertukaran" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue =  " << secondValue << endl;

    return 0;
}