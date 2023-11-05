#include <iostream>
using namespace std;

int main() {

    cout << "PERTUKARAN NILAI MENGGUNAKAN 3 VARIABEL" << endl;

    int firstValue = 10;
    int secondValue = 8;
    int thirdValue;

    cout << "Nilai Awal" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue = " << secondValue << endl;

    //pertukaran
    thirdValue = firstValue;
    firstValue = secondValue;
    secondValue = thirdValue;

    cout << "Nilai Setelah Pertukaran" << endl;
    cout << "Nilai firstValue = " << firstValue << endl;
    cout << "Nilai secondValue = " << secondValue << endl;
   

    return 0;

    
}
