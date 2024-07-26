#include <iostream>

using namespace std;

int main () {
    
    int a[3][3][3], b[3][3][3], c[3][3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "Masukkan nilai a" << i + 1 << j + 1 << k + 1 << ": ";
                cin >> a[i][j][k];
            }
        }
    }
    
    std::cout << '\n';
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "Masukkan nilai b" << i + 1 << j + 1 << k + 1 << ": ";
                cin >> b[i][j][k];
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                c[i][j][k] = (a[i][j][0] * b[0][j][k]) + (a[i][j][1] * b[1][j][k]) + (a[i][j][2] * b[2][j][k]);
            }
        }
    }
    
    cout << '\n';
    
    int i = 1;
    
    for (auto& layers : c) {
        cout << "Layer " << i << endl;
        cout << "--------" << endl;
        for (auto& rows : layers) {
            cout << "[ ";
            for (int column : rows) {
                cout << column << " ";
            }
            cout << "] " << '\n';
        }
        cout << '\n';
        i++;
    }
    
    return 0;
}
