#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << " nilai x: ";
    cin >> x;
    cout << " nilai y: ";
    cin >> y;

    // Variabel buat nyimpan nilai terkecil
    int minimum;

    // Mencari nilai terkecil memakai if-else
    if (x < y) {
        minimum = x;
    } else {
        minimum = y;
    }

    // hasil akhirrr
    cout << "Nilai terkecil diantara " << x << " sama " << y << " adalah: " << minimum << endl;

    return 0;
}
