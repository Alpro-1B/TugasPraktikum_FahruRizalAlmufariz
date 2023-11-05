#include <iostream>
using namespace std;

int main () {
    int N, M;
    cout << "Masukkan jumlah bebek (N)" << endl;
    cin >> N;

    cout << "Masukkan jumlah teman (M)" << endl;
    cin >> M;

    int bebekPerTeman = N/M;
    int sisaBebek = N % M;

    cout << "Perteman mendapatkan bebek " << bebekPerTeman << " ekor" << endl;
    cout << "Sisa bebek setelah di bagi adalah " << sisaBebek << " ekor" << endl;
    
    return 0;
}