#include <iostream>

struct questions {
  std::string question, options[4];
  char answer;
};

int main(int argc, char ** argv) {
  bool running = true;
  int right = 0, wrong = 0, life = 3;
  char answer;
  questions quiz[] = {
        {
            "1. Berapakah hasil dari 12 + 15?",
            {"a) 25", "b) 27", "c) 28", "d) 30"},
            'b'
        },
        {
            "2. Jika x = 3, maka nilai dari 2x + 5 adalah?",
            {"a) 11", "b) 12", "c) 13", "d) 14"},
            'a'
        },
        {
            "3. Sebuah segitiga memiliki alas 10 cm dan tinggi 8 cm. Berapakah luasnya?",
            {"a) 40 cm²", "b) 50 cm²", "c) 60 cm²", "d) 80 cm²"},
            'b'
        },
        {
            "4. Tentukan hasil dari 36 ÷ 6 × 2.",
            {"a) 10", "b) 12", "c) 14", "d) 16"},
            'b'
        },
        {
            "5. Sisi persegi panjang adalah 8 cm dan 6 cm. Berapa kelilingnya?",
            {"a) 26 cm", "b) 28 cm", "c) 30 cm", "d) 32 cm"},
            'd'
        },
        {
            "6. Nilai dari 3³ (3 pangkat 3) adalah?",
            {"a) 9", "b) 27", "c) 81", "d) 243"},
            'b'
        },
        {
            "7. Jika 2y = 18, maka nilai y adalah?",
            {"a) 7", "b) 8", "c) 9", "d) 10"},
            'c'
        },
        {
            "8. Sebuah lingkaran memiliki jari-jari 7 cm. Berapakah kelilingnya? (π = 22/7)",
            {"a) 44 cm", "b) 154 cm", "c) 22 cm", "d) 14 cm"},
            'a'
        },
        {
            "9. Sebuah kubus memiliki panjang sisi 5 cm. Berapakah volume kubus tersebut?",
            {"a) 100 cm³", "b) 125 cm³", "c) 150 cm³", "d) 175 cm³"},
            'b'
        },
        {
            "10. Jika 5x - 10 = 20, maka nilai x adalah?",
            {"a) 4", "b) 5", "c) 6", "d) 7"},
            'c'
        }
    };
  
  for (int i = 0; i < sizeof(quiz) / sizeof(quiz[0]); i++) {
    system("cls");
    if (life == 0) {
      break;
    }
    std::cout << "Life: " << life << "\n\n";
    std::cout << quiz[i].question << std::endl;
    for (std::string e : quiz[i].options) {
      std::cout << e << std::endl;
    }
    std::cout << "Input jawabanmu: ";
    std::cin >> answer;
    if (answer == quiz[i].answer) {
      right++;
    } else {
      wrong++;
      life--;
    }
  }
  
  system("cls");
  std::cout << "Quiz berakhir! Berikut hasil nilai mu: \nBenar: " << right << "\nSalah: " << wrong;

  return 0;
}
