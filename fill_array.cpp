#include <iostream>
using namespace std;

int main() {
    int angka[5];

    cout << "Masukkan 5 angka integer:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    cout << "\nIsi array:\n";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}