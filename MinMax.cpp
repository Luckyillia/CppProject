#include <iostream>
#include <vector>

class Vector{
    
    private:
        vector < int > arr1;
        int size;
        int min = 999999999;
        int max = 0;
    public:
        Vector(int n) : size(n){
            
        }

        void add(int num){
            arr1.push_back(num)
        }
        void min(){
            for(int i = 0;i<size;i++){
                if(arr[i] < min){
                    min = arr[i];
                }
            }
            cout<<"Min number is: "<<arr[i]<<endl;
        }
        void max(){
            for(int i = 0;i<size;i++){
                if(arr[i] > max){
                    max = arr[i];
                }
            }
            cout<<"Max number is: "<<arr[i]<<endl;
        }
}

int main()
{
    int size = 0;
    cout<<"Podaj dlugosc: ";
    cin>>size;
    cout<<endl;
    Vector tab(size);
    for(int i = 0; i < size; i++){
        int a = 0;
        cout<<"Podaj element: ";
        cin>>a;
        tab.add(a);
    }
    tab.max();
    tab.min();
    
    return 0;
}