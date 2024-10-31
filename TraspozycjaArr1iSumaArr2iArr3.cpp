#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Tablica {
private:
    int** arr1;
    int** arr2;
    int** arr3;
    int a;
    int wiersze;
    int kolumny;

public:
    void methoda(){
        cout<<"Podaj wiersze"<<endl;
        cin>>wiersze;
        cout<<"Podaj kolumny"<<endl;
        cin>>kolumny;
        arr1 = new int*[kolumny];
        for(int i = 0;i<kolumny;i++){
            arr1[i] = new int[wiersze];
        }
        arr2 = new int*[wiersze];
        for(int i = 0;i<wiersze;i++){
            arr2[i] = new int[kolumny];
        }
        arr3 = new int*[wiersze];
        for(int i = 0;i<wiersze;i++){
            arr3[i] = new int[kolumny];
        }
        cout<<"Podaj elementy do arr1"<<endl;
        for(int i = 0;i<kolumny;i++){
            for(int j = 0;j<wiersze;j++){
                cout<<"Podaj element ["<<i<<"]["<<j<<"] = ";
                cin>>a;
                arr1[i][j] = a;
            }
        }
        cout<<"arr1"<<endl;
        for(int i = 0;i<kolumny;i++){
            for(int j = 0;j<wiersze;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        for(int i = 0;i<wiersze;i++){
            for(int j = 0;j<kolumny;j++){
                arr2[i][j] = arr1[j][i];
            }
        }
        cout<<endl;
        cout<<"Transpozycja arr1"<<endl;
        for(int i = 0;i<wiersze;i++){
            for(int j = 0;j<kolumny;j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; j < kolumny; ++j) {
                arr3[i][j] = rand() % 100 + 1;
            }
        }
        cout<<endl;
        cout<<"arr3"<<endl;
        for(int i = 0;i<wiersze;i++){
            for(int j = 0;j<kolumny;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"Suma arr2 i arr3"<<endl;
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; j < kolumny; ++j) {
                cout << arr3[i][j]+arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Tablica tab;
    tab.methoda();
    return 0;
}