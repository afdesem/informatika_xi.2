#include <iostream>
#include <random>
#include <ctime>

int main(int argc, char ** argv) {
  srand(time(0));
  int num = rand() % 100, answer;
  
  system("cls");
  
  std::cout << "Masukan angka tebakanmu!(1-100): ";
  std::cin >> answer;
  
  while (answer != num) {
    system("cls");
    
    if (answer > num) {
      std::cout << "Lebih rendah lagi!\n";
    } else if (answer < num) {
      std::cout << "Lebih tinggi lagi!\n";
    }
    
    std::cout << "Masukan angka tebakanmu!(1-100): ";
    std::cin >> answer;
    
  }
  
  std::cout << "Benar! jawabannya adalah: " << num << std::endl;
}
