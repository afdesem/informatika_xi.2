#include <iostream>
#include <cstring>

using namespace std;

int main (int argc, char* argv[]) {

    char teks1[10], teks2[10];
    int jlhdepan, jlhkel, jlhhuruf;

    cout << "Masukan nama depan anda?: ";
    cin >> teks1;

    cout << "Masukan nama belakang anda?: ";
    cin >> teks2;

    jlhdepan = strlen(teks1);
    jlhkel = strlen(teks2);
    jlhhuruf = jlhdepan + jlhkel;

    cout << "Nama lengkap anda: " << teks1 << " " << teks2 << endl;
    cout << "Jumlah huruf nama anda: " << jlhhuruf << " huruf" << endl;
 
    return 0;
}
