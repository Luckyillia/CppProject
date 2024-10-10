#include <iostream>

using namespace std;

int main()
{
    double a1,a2,b1,b2,c1,c2,w,wx,wy,x,y;
    cout<<"a1 = ";
    cin>>a1;
    cout<<endl;
    cout<<"b1 = ";
    cin>>b1;
    cout<<endl;
    cout<<"c1 = ";
    cin>>c1;
    cout<<endl;
    cout<<"a2 = ";
    cin>>a2;
    cout<<endl;
    cout<<"b2 = ";
    cin>>b2;
    cout<<endl;
    cout<<"c2 = ";
    cin>>c2;
    cout<<endl;
    w = a1*b2-a2*b1;
    wx = b1*c2-b2*c1;
    wy = a1*c2-a2*c1;
    if(w != 0){
        x = wx/w;
        y = wy/w;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }else if(wx == 0 && wy == 0){
        cout<<"Nieskonczenie wiele rozwiazan"<<endl;
    }else{
        cout<<"sprzeczny"<<endl;
    }
    return 0;
}