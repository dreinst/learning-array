#include <iostream>
using namespace std;

int main() {
    int angka[7]; 
    int max;

    cout << "Masukkan 7 angka integer:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    max = angka[0];

    for (int i = 1; i < 7; i++) {
        if (angka[i] > max) {
            max = angka[i];
        }
    }

    cout << "\nNilai maksimum adalah: " << max << endl;

    return 0;
}