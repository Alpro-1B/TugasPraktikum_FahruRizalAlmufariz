#include <iostream>
using namespace std;

int main () {
    int score;

    cout << "Masukkan nilai anda" << endl;
    cout << "Note: Jika nilai anda desimal gunakan (.) sebagai (,)" << endl;
    cin >> score;

    if (score >= 90) {
        cout << "Selamat! anda mendapatkan nilai A" << endl;
    } else if (score >=80 && score <=89) {
        cout << "Selamat! anda mendapatkan nilai B" << endl;
    } else if (score >=70 && score <=79) {
        cout << "Selamat! anda mendapatkan nilai C" << endl;
    } else if (score >=60 && score <=69) {
        cout << "Selamat! anda mendapatkan nilai D" << endl;
    } else {
        cout << "Selamat! anda mendapatkan nilai E" << endl;
    }

    return 0;
}