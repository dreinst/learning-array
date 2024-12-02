#include <iostream>
using namespace std;

int main() {
    int angka[10];

    cout << "Masukkan 10 angka integer:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += angka[i];
    }

    cout << "\nJumlah semua elemen array: " << sum << endl;

    return 0;
}
