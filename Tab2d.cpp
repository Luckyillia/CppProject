#include <iostream>
#include <string>

using namespace std;

int x;
int y;


class Tab {
    private:
        double** arr;
        double** array;
        double** arra;
        int col;
        int row;
        double n = 0;
    public:
        Tab(int a, int b) : row(a), col(b){
            arr = new double*[row];
            for(int i = 0;i<row;i++){
                arr[i] = new double[col];
            }
            array = new double*[row];
            for(int i = 0;i<row;i++){
                array[i] = new double[col];
            }
            arra = new double*[row];
            for(int i = 0;i<row;i++){
                arra[i] = new double[col];
            }
        }
        
        void fill(){
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<"element["<<i<<"]["<<j<<"] = ";
                    cin>>n;
                    arr[i][j] = n;
                }
            }
            cout<<endl;
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<"element["<<i<<"]["<<j<<"] = ";
                    cin>>n;
                    array[i][j] = n;
                }
            }
        }
        
        void print(){
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<array[i][j]<<" ";
                }
                cout<<endl;
            }
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    cout<<arra[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
        int sum(){
            n = 0;
            if(row == col){
                for(int i = 0;i<row;i++){
                    for(int j = 0;j<col;j++){
                        n+=arr[i][j];
                    }
                }    
            }
            for(int i = 0;i<row;i++){
                for(int j = 0;j<col;j++){
                    arra[i][j] = array[i][j]+arr[i][j];
                }
            }
            return n;
        }
};

int main()
{
    cout<<"row = ";
    cin>>x;
    cout<<"column = ";
    cin>>y;
    Tab tab(x,y);
    tab.fill();
    tab.print();
    cout<<tab.sum();
    
}