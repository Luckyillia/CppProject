#include <cstdlib>
#include <iostream>
#include <ctime>
#include<algorithm>

int size = 4;

class B;

class A{
    public:
    int **arr;
    void methoda(int size){
        arr = (int** )calloc(size, sizeof(int* ));
        for(int i = 0;i<size;i++){
            *(arr + i) = (int* )calloc(size, sizeof(int));
        }
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size;j++){
                arr[i][j] = (rand()%100)+1;
            }
        }
    };
    friend void sum(A& , B&);
};

class B{
    public:
    int **arr;
    void methoda(int size){
        arr = (int** )calloc(size, sizeof(int* ));
        for(int i = 0;i<size;i++){
            *(arr + i) = (int* )calloc(size, sizeof(int));
        }
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size;j++){
                arr[i][j] = (rand()%100)+1;
            }
        }
    };
    friend void sum(A& , B&);
};

void sum(A& a, B& b){
    int **tab;
    tab = (int** )calloc(size, sizeof(int* ));
    for( int i = 0; i < size; i++){
	    *(tab + i) = (int* )calloc(size, sizeof(int));
    } 
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            tab[i][j] = a.arr[i][j]+b.arr[i][j];
        }
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            if(tab[i][j] % 2 == 0){
                std::cout<<tab[i][j]<<" ";
            }else{
                std::cout<<"&"<<" ";
            }
            
        }
        std::cout<<std::endl;
    }
}

int main()
{
    srand(time(NULL));
    A a;
    B b;
    a.methoda(size);
    b.methoda(size);
    sum(a,b);
}
