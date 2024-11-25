#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <algorithm>

using namespace std;

class Tablica {
private:
    vector < int > tab1;
    vector < int > tab2;
    vector < int > tab3;
    int x;

public:
    void sortowanie(){
        cout<<"x"<<endl;
        cin>>x;
        cout<<endl;
        for (int i = 0; i < x; ++i) {
            tab1.push_back(rand() % 100 + 1);
        }
        cout<<endl;
        cout<<"Vector"<<endl;
        for (int i = 0; i < x; ++i) {
            cout << tab1[i] << " ";    
        }
        cout<<endl;
        cout<<"Sorted Vector"<<endl;
        sort(tab1.begin(),tab1.end());
        for (int i = 0; i < x; ++i) {
            cout << tab1[i] << " ";    
        }
        cout<<endl;
    }
    void sum(){
        cout<<"x"<<endl;
        cin>>x;
        cout<<endl;
        for (int i = 0; i < x; ++i) {
            tab2.push_back(rand() % 100 + 1);
        }
        for (int i = 0; i < x; ++i) {
            tab3.push_back(rand() % 100 + 1);
        }
        cout<<endl;
        cout<<"Vector 1"<<endl;
        for (int i = 0; i < x; ++i) {
            cout << tab2[i] << " ";    
        }
        cout<<endl;
        cout<<"Vector 2"<<endl;
        for (int i = 0; i < x; ++i) {
            cout << tab3[i] << " ";    
        }
        cout<<endl;
        cout<<"Suma Vectors"<<endl;
        for (int i = 0; i < x; ++i) {
            cout << tab2[i]+tab3[i] << " ";    
        }
        cout<<endl; 
    }
};

int main() {
    srand( time( NULL ) );
    Tablica tab;
    tab.sortowanie();
    tab.sum();
    return 0;
}