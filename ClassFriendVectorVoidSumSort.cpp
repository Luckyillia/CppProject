#include <cstdlib>
#include <iostream>
#include <ctime>
#include<algorithm>
#include <vector>

int size = 4;

class B;

class A{
    public:
    std::vector<std::vector<int>> arr;
    int size;
    A(const std::vector<std::vector<int>>& vec, int size) : arr(vec), size(size) {}
    
    friend void sum(A& , B&);
    friend void sort(A& , B&);
    ~A(){}
};

class B{
    public:
    std::vector<std::vector<int>> arr;
    int size;
    B(const std::vector<std::vector<int>>& vec, int size) : arr(vec), size(size) {}
    
    friend void sum(A& , B&);
    friend void sort(A& , B&);
    ~B(){}
};

void sum(A& a, B& b){
    std::vector<std::vector<int>> n(size, std::vector<int>(size));
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            n[i][j] = a.arr[i][j] + b.arr[i][j]; 
        }
    }

    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            if(n[i][j] % 2 == 0){
                std::cout<<n[i][j]<<" ";
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
    std::vector<std::vector<int>> v(size, std::vector<int>(size));
    std::vector<std::vector<int>> c(size, std::vector<int>(size));
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            v[i][j] = (rand() % 100) + 1;
        }
    }
    A a(v, size);
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            c[i][j] = (rand() % 100) + 1;
        }
    }
    B b(c, size);
    
    sum(a,b);
}
