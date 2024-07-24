#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    
    int a[2][2], b[2][2], c[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukan nilai a" << i + 1 << j + 1 << ": " << endl;
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukan nilai b" << i + 1 << j + 1 << ": " << endl;
            cin >> b[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        cout << " [ " << c[i][0] << " " << c[i][1] << " ] " << endl;
    }
    
    return 0;
}
