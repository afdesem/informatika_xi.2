#include <cstdlib>
#include <iostream>
#include <cmath>


int main () {

    float alas, tinggi, segitiga, vround, vceil, vfloor, vtrunc;

    std::cout << "Masukkan alas: ";
    std::cin >> alas;
    std::cout << "Masukkan tinggi: ";
    std::cin >> tinggi;
    segitiga = 0.5 * alas * tinggi;

    vround = round(segitiga);
    vceil = ceil(segitiga);
    vfloor = floor(segitiga);
    vtrunc = trunc(segitiga);

    std::cout << "Hasil: " << vround << std::endl;
    std::cout << "Hasil: " << vceil << std::endl;
    std::cout << "Hasil: " << vfloor << std::endl;
    std::cout << "Hasil: " << vtrunc << std::endl;

    return 0;
}
