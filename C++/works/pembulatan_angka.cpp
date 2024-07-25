#include <cstdlib>
#include <iostream>
#include <cmath>


int main () {
    float pecahan, vround, vceil, vfloor, vtrunc;

    std::cout << "Masukkan bilangan pecahan: ";
    std::cin >> pecahan;
    

    vround = round(pecahan);
    vceil = ceil(pecahan);
    vfloor = floor(pecahan);
    vtrunc = trunc(pecahan);

    std::cout << "Hasil vround: " << vround << std::endl;
    std::cout << "Hasil vceil: " << vceil << std::endl;
    std::cout << "Hasil vfloor: " << vfloor << std::endl;
    std::cout << "Hasil vtrunc: " << vtrunc << std::endl;
    
    return 0;
}
