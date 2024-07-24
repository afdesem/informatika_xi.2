#include <iostream>

using namespace std;

int main () {

    int a[2][2], b[2][2], c[2][2];

    cout << "Masukan nilai A11: ";
    cin >> a[0][0];
    cout << "Masukan nilai A12: ";
    cin >> a[0][1];
    cout << "Masukan nilai A21: ";
    cin >> a[1][0];
    cout << "Masukan nilai A22: ";
    cin >> a[1][1];

    cout << "Masukan nilai B11: ";
    cin >> b[0][0];
    cout << "Masukan nilai B12: ";
    cin >> b[0][1];
    cout << "Masukan nilai B21: ";
    cin >> b[1][0];
    cout << "Masukan nilai B22: ";
    cin >> b[1][1];

    c[0][0] = (a[0][0] * b[0][0]) + (a[0][1] * b[1][0]);
    c[0][1] = (a[0][0] * b[0][1]) + (a[0][1] * b[1][1]);
    c[1][0] = (a[1][0] * b[0][0]) + (a[1][1] * b[1][0]);
    c[1][1] = (a[1][0] * b[0][1]) + (a[1][1] * b[1][1]);

    cout << "Nilai MAtrix C Adalah: " << endl;
    cout << " [ " << c[0][0] << " " << c[0][1] << " ] " << endl;
    cout << " [ " << c[1][0] << " " << c[1][1] << " ] " << endl;

    return 0;
}
