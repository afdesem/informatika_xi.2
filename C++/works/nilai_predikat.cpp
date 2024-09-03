#include <iostream>

using namespace std;

int main() {

  int a;

  std::cout << "Masukan Nilai: ";
  std::cin >> a;

  if (a >= 90) {
    std::cout << "A, Sangat Memusakan";
  } else if (a >= 80) {
    std::cout << "B, Memusakan";
  } else if (a >= 70) {
    std::cout << "C, Baik";
  } else {
    std::cout << "D, Tidak Lulus";
  }

  return 0;
}
