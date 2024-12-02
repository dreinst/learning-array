#include <iostream>
using namespace std;

int main() {
    int angka[10];

    cout << "Masukkan 10 angka integer:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    int jumlah = 0;
    for (int i = 0; i < 10; i++) {
        jumlah += angka[i];
    }

    cout << "\nJumlah semua elemen array: " << jumlag << endl;

    return 0;
}
