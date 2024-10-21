#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int col = 0;
int row = 0;
int a = 0;

class Vector{
    private:
        int** arr1;
        int** arr2;
    public:
        void methoda(){
            cout<<"Podaj columny vectora = ";
            cin>>col;
            cout<<endl;
            cout<<"Podaj wirsze vectora = ";
            cin>>row;
            cout<<endl;
            arr1 = new int*[row];
            for(int i = 0;i<row;i++){
                arr1[i] = new int[col];
            }
            arr2 = new int*[col];
            for(int i = 0;i<col;i++){
                arr2[i] = new int[row];
            }
            cout<<"Podaj elementy do arr1"<<endl;
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<"Podaj element ["<<i<<"]["<<j<<"] = ";
                    cin>>a;
                    arr1[i][j] = a;
                }
            }
            cout<<"arr1"<<endl;
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<arr1[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    arr2[j][i] = arr1[i][j];
                }
            }
            cout<<"Transpozycja arr1"<<endl;
            for(int i = 0;i<col;i++){
                for(int j = 0;j<row;j++){
                    cout<<arr2[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    Vector test;
    test.methoda();
}