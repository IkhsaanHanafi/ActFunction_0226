#include <iostream>
using namespace std;

// Prosedur Input
void input(float &d1, float &d2) {
    cout << "Masukkan diagonal 1: ";
    cin >> d1;
    cout << "Masukkan diagonal 2: ";
    cin >> d2;
}

// Fungsi Menghitung Luas (pakai parameter)
float hitungLuas(float d1, float d2) {
    return 0.5 * d1 * d2;
}

// Prosedur Output
void output(float luas) {
    cout << "Luas belah ketupat adalah: " << luas << endl;
}

int main() {
    float d1, d2, luas;

    input(d1, d2);              
    luas = hitungLuas(d1, d2);  
    output(luas);               

    return 0;
}