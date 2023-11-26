#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Selamat datang di program Penampil Nilai Maks dalam Array" << endl;

    // Meminta pengguna untuk memasukkan jumlah indeks array
    cout << "Masukkan jumlah indeks array: ";
    cin >> n;

    // Membuat array dengan ukuran n
    int arr[n];

    // Meminta pengguna untuk memasukkan nilai-nilai array
    cout << "Masukkan nilai-nilai array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Nilai index " << i << ": ";
        cin >> arr[i];
    }

    // Menampilkan nilai-nilai dalam array
    cout << "Nilai-nilai dalam array adalah: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Mencari nilai tertinggi dalam array
    int max = arr[0];
    int index = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    // Menampilkan hasil
    cout << "Nilai tertinggi dalam array adalah: " << max << endl;

    return 0;
}
