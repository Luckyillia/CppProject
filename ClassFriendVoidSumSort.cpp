#include <cstdlib>
#include <iostream>
#include <ctime>
#include<algorithm>

int size = 4;

class B;

class A{
    public:
    double** arr;
    void methoda(int size){
        arr = new double* [size];
        for(int i = 0;i<size;i++){
            arr[i] = new double [size];
        }
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size;j++){
                arr[i][j] = (rand()%100)+1;
            }
        }
    };
    friend void sum(A& , B&);
    friend void sort(A& , B&);
};

class B{
    public:
    double** arr;
    void methoda(int size){
        arr = new double* [size];
        for(int i = 0;i<size;i++){
            arr[i] = new double [size];
        }
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size;j++){
                arr[i][j] = (rand()%100)+1;
            }
        }
    };
    friend void sum(A& , B&);
    friend void sort(A& , B&);
};

void sum(A& a, B& b){
    double** tab = new double*[size];
    for(int i = 0;i<size;i++){
        tab[i] = new double [size];
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            tab[i][j] = a.arr[i][j]+b.arr[i][j];
        }
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            std::cout<<tab[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void sort_tab(A& a, B& b){
#include <cstdlib>
#include <iostream>
#include <ctime>
#include<algorithm>

int size = 4;

class B;

class A{
    public:
    double** arr;
    void methoda(int size){
        arr = new double* [size];
        for(int i = 0;i<size;i++){
            arr[i] = new double [size];
        }
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size;j++){
                arr[i][j] = (rand()%100)+1;
            }
        }
    };
    friend void sum(A& , B&);
    friend void sort(A& , B&);
};

class B{
    public:
    double** arr;
    void methoda(int size){
        arr = new double* [size];
        for(int i = 0;i<size;i++){
            arr[i] = new double [size];
        }
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size;j++){
                arr[i][j] = (rand()%100)+1;
            }
        }
    };
    friend void sum(A& , B&);
    friend void sort(A& , B&);
};

void sum(A& a, B& b){
    double** tab = new double*[size];
    for(int i = 0;i<size;i++){
        tab[i] = new double [size];
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            tab[i][j] = a.arr[i][j]+b.arr[i][j];
        }
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            std::cout<<tab[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void sort_tab(A& a, B& b){
    double** tab = new double*[size];
    for(int i = 0;i<size;i++){
        tab[i] = new double [size];
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            tab[i][j] = a.arr[i][j]+b.arr[i][j];
        }
    }
    for(int i = 0;i<size;i++){
        std::sort(tab[i], tab[i]+size);
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            std::cout<<tab[i][j]<<" ";
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
    std::cout<<std::endl;
    sort_tab(a,b);
}
