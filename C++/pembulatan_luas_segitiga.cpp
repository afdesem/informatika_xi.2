#include <cstdlib>
#include <iostream>
#include <cmath>


int main () {
    //Declare 'em variables
    float alas, tinggi, segitiga, vround, vceil, vfloor, vtrunc;

    //Now make sum user inputs
    std::cout << "Masukkan alas: ";
    std::cin >> alas;
    std::cout << "Masukkan tinggi: ";
    std::cin >> tinggi;
    segitiga = 0.5 * alas * tinggi;

    //now assign more variables and round those shits
    vround = round(segitiga);
    vceil = ceil(segitiga);
    vfloor = floor(segitiga);
    vtrunc = trunc(segitiga);

    //fucking output all those shits
    std::cout << "Hasil: " << vround << std::endl;
    std::cout << "Hasil: " << vceil << std::endl;
    std::cout << "Hasil: " << vfloor << std::endl;
    std::cout << "Hasil: " << vtrunc << std::endl;
    
    return 0;
}
