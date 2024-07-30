#include <iostream>
#include <cstring>

using namespace std;

int main (int argc, char* argv[]) {

    char teks1[10], teks2[10];

    cout << "Masukan nama depan anda?: ";
    cin >> teks1;

    cout << "Masukan nama belakang anda?: ";
    cin >> teks2;

    strcat(teks1, teks2);

    cout << "Nama lengkap anda: " << teks1 << endl;

    return 0;
}
