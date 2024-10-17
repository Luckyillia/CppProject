#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int size = 0;
int a = 0;

bool porownajRosnace(int a, int b){
    return a>b;
}

bool porownajMalejace(int a, int b){
    return a<b;
}

class Vector{
    private:
        vector < int > arr1;
        vector < int > arr2;
        vector < int > arr3;
    public:
        void methoda(){
            cout<<"Podaj dlugosc vectora = ";
            cin>>size;
            cout<<endl;
            cout<<"Podaj elementy do arr1"<<endl;
            for(int i = 0;i<size;i++){
                cout<<"Podaj element = ";
                cin>>a;
                arr1.push_back(a);
            }
            cout<<"arr1"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr1[i]<<" ";
            }
            cout<<endl;
            sort(arr1.begin(), arr1.end(),porownajRosnace);
            cout<<"sorted ros arr1"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr1[i]<<" ";
            }
            cout<<endl;
            sort(arr1.begin(), arr1.end(),porownajMalejace);
            cout<<"sorted mal arr1"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr1[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    Vector vec;
    vec.methoda();
}