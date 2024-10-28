#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int col = 0;
int row = 0;
int a = 0;
int sumaPrzekatnej = 0;
int sumaNadPrzekatna = 0;
int sumaPodPrzekatna = 0;

class Vector {
private:
    int** arr1;
public:
    void methoda() {
        cout << "Podaj kolumny wektora = ";
        cin >> col;
        cout << endl;
        cout << "Podaj wiersze wektora = ";
        cin >> row;
        cout << endl;
        if (row != col) {
            cout << "Macierz nie jest kwadratowa!" << endl;
            return;
        }
        arr1 = new int*[row];
        for (int i = 0; i < row; i++) {
            arr1[i] = new int[col];
        }
        cout << "Podaj elementy do arr1" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << "Podaj element [" << i << "][" << j << "] = ";
                cin >> a;
                arr1[i][j] = a;
            }
        }
        cout << "arr1" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i = 0; i < col; i++) {
            sumaPrzekatnej += arr1[i][i];
        }
        cout << "Suma przekątnej arr1: " << sumaPrzekatnej << endl;

        for (int i = 0; i < row; i++) {
            for (int j = i + 1; j < col; j++) {
                sumaNadPrzekatna += arr1[i][j];
            }
        }
        cout << "Suma elementów nad przekątną główną: " << sumaNadPrzekatna << endl;

        for (int i = 1; i < row; i++) {
            for (int j = 0; j < i; j++) {
                sumaPodPrzekatna += arr1[i][j];
            }
        }
        cout << "Suma elementów pod przekątną główną: " << sumaPodPrzekatna << endl;

        for (int i = 0; i < row; i++) {
            delete[] arr1[i];
        }
        delete[] arr1;
    }
};

int main() {
    Vector test;
    test.methoda();
    return 0;
}