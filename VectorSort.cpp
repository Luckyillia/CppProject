#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int size = 0;
int a = 0;

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
            cout<<"Podaj elementy do arr2"<<endl;
            for(int i = 0;i<size;i++){
                cout<<"Podaj element = ";
                cin>>a;
                arr2.push_back(a);
            }
            cout<<"arr1"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr1[i]<<" ";
            }
            cout<<endl;
            cout<<"arr2"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr2[i]<<" ";
            }
            cout<<endl;
            for(int i = 0;i<size;i++){
                arr3.push_back(arr1[i]+arr2[i]);
            }
            cout<<"arr3"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr3[i]<<" ";
            }
            cout<<endl;
            sort(arr3.begin(), arr3.end());
            cout<<"sorted arr3"<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr3[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    Vector vec;
    vec.methoda();
}