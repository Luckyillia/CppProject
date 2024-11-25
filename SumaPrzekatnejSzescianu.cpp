#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Tablica {
private:
    int*** arr;
    int*** arr2;
    int x;
    int y;
    int z;
    int sum = 0;

public:
    void methoda(){
        cout<<"x"<<endl;
        cin>>x;
        cout<<"y"<<endl;
        cin>>y;
        cout<<"z"<<endl;
        cin>>z;
        cout<<endl;
        arr = new int**[x];
        for(int i = 0;i<x;i++){
            arr[i] = new int*[y];
            for(int j = 0;j<z;j++){
                arr[i][j] = new int[z];
            }
        }
        arr2 = new int**[x];
        for(int i = 0;i<x;i++){
            arr2[i] = new int*[y];
            for(int j = 0;j<z;j++){
                arr2[i][j] = new int[z];
            }
        }
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                for (int k = 0; k < z; ++k) {
                    arr[i][j][k] = rand() % 100 + 1;
                }
            }
        }
        cout<<endl;
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                for (int k = 0; k < z; ++k) {
                    cout << arr[i][j][k] << " ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"Suma przekatnej sescianu"<<endl;
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                for (int k = 0; k < z; ++k) {
                    if(i == j && i == k && j == k){
                        sum +=arr[i][j][k];
                    }
                }
            }
        }
        cout<<sum<<endl;
        cout << endl;
        
        for (int i = 0; i < x; i++) 
        { 
            delete[] arr[i]; 
            for (int j = 0; j < x; j++) 
            { 
                delete[] arr[i][j]; 
            } 
        } 
        delete[] arr;
    }
};

int main() {
    Tablica tab;
    tab.methoda();
    return 0;
}