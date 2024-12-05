#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int x = 0;
int row = 0;
int a = 0;
int suma = 0;

class Vector {
private:
    vector < int > arr1;
	vector < vector < int > > arr;
public:
	void methoda() {
		cout<<"Podaj dlugosc vectora = ";
        cin>>x;
        cout<<endl;
        for(int i = 0;i<x;i++){
            arr1.push_back(0);
        }
		for(int i = 0; i<x; i++) {
			arr.push_back(arr1);
		}
		for(int i = 0; i<x; i++) {
			for(int j = 0; j<x; j++) {
				arr[i][j] = rand() % 100 + 1;
			}
		}
		cout<<"arr1"<<endl;
		for(int i = 0; i<x; i++) {
			for(int j = 0; j<x; j++) {
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i = 0; i<x; i++) {
			for(int j = 0; j<x; j++) {
				if(i == j){
				    int temp = arr[i][j];
				    arr[i][j] = arr[x-j-1][i];
				    arr[x-j-1][i] = temp;
				}
			}
		}
		cout<<"Po zamianie arr1"<<endl;
		for(int i = 0; i<x; i++) {
			for(int j = 0; j<x; j++) {
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};

int main()
{
    srand (time(NULL));
	Vector test;
	test.methoda();
}