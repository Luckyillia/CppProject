#include <iostream>
#include <string>
#include <algorithm>

int x;
int a;

using namespace std;

class Myclass{
    private:
    double* arr_1;
    double* arr_2;
    double* arr_3;
    public:
    void Mymethod(){
        cout<<"Podaj wielkosc tablicy = ";
        cin>>x;
        cout<<endl;
        arr_1 = new double [x];
        arr_2 = new double [x];
        arr_3 = new double [x];
        for(int i = 0;i<x;i++){
            cout<<"element["<<i<<"] = ";
            cin>>a;
            arr_1[i] = a;
        }
        for(int i = 0;i<x;i++){
            cout<<"element["<<i<<"] = ";
            cin>>a;
            arr_2[i] = a;
        }
        for(int i = 0;i<x;i++){
            arr_3[i] = arr_1[i]+arr_2[i];
        }
        for(int i = 0;i<x;i++){
            cout<<arr_1[i]<<" ";
        }
        cout<<endl;
        for(int i = 0;i<x;i++){
            cout<<arr_2[i]<<" ";
        }
        cout<<endl;
        for(int i = 0;i<x;i++){
            cout<<arr_3[i]<<" ";
        }
        cout<<endl;
        sort(arr_3,arr_3 + x);
        for(int i = 0;i<x;i++){
            cout<<arr_3[i]<<" ";
        }
        cout<<endl;
        sort(arr_3,arr_3 + x, greater < double >());
        for(int i = 0;i<x;i++){
            cout<<arr_3[i]<<" ";
        }
        delete arr_1;
        delete arr_2;
        delete arr_3;
    }
};

int main()
{
    Myclass test;
    test.Mymethod();
}