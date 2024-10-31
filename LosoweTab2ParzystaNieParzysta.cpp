#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Tablica {
private:
    int** arr;
    int** arr2;
    int wiersze;
    int kolumny;

public:
    void methoda(){
        cout<<"Podaj wiersze"<<endl;
        cin>>wiersze;
        cout<<"Podaj kolumny"<<endl;
        cin>>kolumny;
        arr = new int*[wiersze];
        for(int i = 0;i<wiersze;i++){
            arr[i] = new int[kolumny];
        }
        arr2 = new int* [wiersze];
        for(int i = 0;i<wiersze;i++){
            arr2[i] = new int[kolumny];
        }
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; j < kolumny; ++j) {
                arr[i][j] = rand() % 100 + 1;
            }
        }
        cout<<endl;
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; j < kolumny; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout<<"Liczby parzyste"<<endl;
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; j < kolumny; ++j) {
                if(arr[i][j] % 2 == 0){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
        cout << endl;
        cout<< "Liczby nie parzyste"<<endl;
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; j < kolumny; ++j) {
                if(arr[i][j] % 2 != 0){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
        for (int i = 0; i < wiersze; i++) 
        { 
            delete[] arr[i]; 
        } 
        delete[] arr;
    }
};

int main() {
    Tablica tab;
    tab.methoda();
    return 0;
}