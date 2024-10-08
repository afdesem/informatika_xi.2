#include <iostream>
using namespace std;

//create factorial function for flexibility
int faktorial(int p) {
    for (int i = p-1; i > 0; i--) {
        p *= i;
    }
    return p;
}

//the right formula for permutations are n!/(n-r)!
int permutasi(int x, int y) {
    return fac(x) / fac(x-y);
}

int main () {
    int n, r;
    cout << "Masukan nilai n: ";
    cin >> n;

    while (n < 0) {
    cout << "Masukan nilai n kembali: ";
    cin >> n;
    }

    cout << "Masukan nilai r: ";
    cin >> r;

    while (r < 0) {
    cout << "Masukan nilai r kembali: ";
    cin >> r;
    }

    cout << "Nilai permutasi " << r << " dari " << n << " adalah " << permutasi(3, 2) << endl;

    return 0;
}
