
#include <iostream>

int a;
int b;
int y;

using namespace std;

class Tab{
    private:
        int* arr1;
        int* arr2;
    public:
        void method(){
            cout<<"podaj dlug"<<endl;
            cin>>a;
            arr1 = new int[a];
            arr2 = new int[a];
            y = 0;
            for(int i = 0;i<a;i++){
                cout<<"podaj element: ";
                cin>>b;
                arr1[i] = b;
            }
            for(int i = 0;i<a;i++){
                cout<<arr1[i]<<" ";
            }
            cout<<endl;
            for(int i = a-1;i>-1;i--){
                arr2[y] = arr1[i];
                y++;
            }
            cout<<endl;
            for(int i = 0;i<a;i++){
                cout<<arr2[i]<<" ";
            }
        }
};


int main()
{
    Tab tab;
    tab.method();

    return 0;
}