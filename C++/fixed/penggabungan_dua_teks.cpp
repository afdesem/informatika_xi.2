#include <iostream>
#include <cstring>

using namespace std;

int main (int argc, char* argv[]) {

    string teks1, teks2;

    cout << "Masukan nama depan anda?: ";
    cin >> teks1;

    cout << "Masukan nama belakang anda?: ";
    cin >> teks2;

    teks1.append(teks2);

    cout << "Nama lengkap anda: " << teks1 << endl;

    return 0;
}
