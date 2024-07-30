#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {

    string teks1, teks2;

    cout << "Masukan nama depan anda?: ";
    cin >> teks1;

    cout << "Masukan nama belakang anda?: ";
    cin >> teks2;

    cout << "Nama lengkap anda: " << teks1 << " " << teks2 << endl;
    cout << "Jumlah huruf nama anda: " << teks1.length() + teks2.length() << " huruf" << endl;
 
    return 0;
}
