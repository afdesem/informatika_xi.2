#include <cstdlib>
#include <iostream>
#include <cmath>


int main () {
    //Declare 'em variables
    float pecahan, vround, vceil, vfloor, vtrunc;

    //Now make sum user inputs
    std::cout << "Masukkan bilangan pecahan: ";
    std::cin >> pecahan;
    

    //now assign more variables and round those shits
    vround = round(pecahan);
    vceil = ceil(pecahan);
    vfloor = floor(pecahan);
    vtrunc = trunc(pecahan);

    //fucking output all those shits
    std::cout << "Hasil: " << vround << std::endl;
    std::cout << "Hasil: " << vceil << std::endl;
    std::cout << "Hasil: " << vfloor << std::endl;
    std::cout << "Hasil: " << vtrunc << std::endl;
    
    return 0;
}
