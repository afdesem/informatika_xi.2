#include <iostream>
#include <cstdlib>
using namespace std;

int permutasi(int x, int y) {
    int nilai_permut, selisih;
    int faktorial = 1;
    selisih = x - y;

    while (x > 0) {
        faktorial *= x;
        x--;
    }

    nilai_permut = faktorial / selisih;
    return nilai_permut;
}

int main (int argc, char ** argv[]) {

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

    cout << "Nilai permutasi" << r << " dari " << n << " adalah " << permutasi(n, r) << endl;

    return 0;
}
