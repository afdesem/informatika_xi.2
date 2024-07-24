#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    
    int a[3][3], b[3][3], c[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukan nilai a" << i + 1 << j + 1 << ": " << endl;
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukan nilai b" << i + 1 << j + 1 << ": " << endl;
            cin >> b[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]) + (a[i][2] * b[2][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        cout << " [ " << c[i][0] << " " << c[i][1] << " " << c[i][2] << " ] " << endl;
    }
    
    return 0;
}
