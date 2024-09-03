#include <iostream>
#include <map>
#include <function>
#include <iterator>

int main(int argc, char ** argv) {

  int a;

  std::cout << "Masukan Nilai: ";
  std::cin >> a;

  std::map<double, std::string, std::greater<double>> grade = {{90, "A, Sangat Memuaskan"}, {80, "B, Memuaskan"}, {70, "C, Baik"}};

  auto g = grade.begin();

  for (int i = 0; i < grade.size(); i++) {
    if (a >= g->first) {
      std::cout << g->second;
      break;
    } else if (a < 60) {
      std::cout << "C, Buruk";
      break;
    } else if (a > 100 || a < 0) {
      std::cout << "Nilai tidak valid";
      break;
    } else {
      std::advance(g, i);
    }
  }

  return 0;
}
