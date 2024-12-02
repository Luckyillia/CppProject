
#include <iostream>

int a;
int b;
int y;

using namespace std;

class Master{
    public:
        void method(){
            cout<<"Master"<<endl;
        }
};

class A : public Master{
    public:
        void method(){
            cout<<"A"<<endl;
        }
};

class B : public Master{
    public:
        void method(){
            cout<<"B"<<endl;
        }
    
};

class C : public Master{
    public:
        void method(){
            cout<<"C"<<endl;
        }
};

int main()
{
    Master **tab = new Master*[3];
    tab[0] = new A;
    tab[1] = new B;
    tab[2] = new C;
    for(int i = 0; i < 3 ; i++){
        tab[i]->method();
    }
    return 0;
}