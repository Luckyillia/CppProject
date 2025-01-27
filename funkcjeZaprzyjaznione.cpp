#include <iostream>
using namespace std;

class Prostokat;

class Punkt {
    
    friend void isInside(const Punkt*, const Prostokat*);

public:
    int x, y, z;
    Punkt(int x = 0, int y = 0, int z = 0): x(x), y(y), z(z){ }
};

class Prostokat {

    int x1, y1, z1, x2, y2, z2;
    friend void isInside(const Punkt*, const Prostokat*);

public:
    Prostokat(int x1 = 0, int y1 = 0, int z1 = 0, int x2 = 0, int y2 = 0, int z2 = 0): x1(x1), y1(y1), z1(z1), x2(x2), y2(y2), z2(z2){ }
};

void isInside(const Punkt *p, const Prostokat *z) {
   if(p->x <= z->x2 && p->x >= z->x1 && p->y <= z->y2 && p->y >= z->y1 && p->z <= z->z2 && p->z >= z->z1)
       cout << "Punkt [" <<  p->x  <<","<< p->y <<","<< p->z << "] lezy w szescian\n";
    else
        cout << "Punkt [" <<  p->x  <<","<< p->y <<","<< p->z << "] lezy poza szescian\n";
}

int main() {
    Punkt p(7,6,3);
    Prostokat z(0,0,0,15,15,15);

    isInside(&p,&z);
}


#include <iostream>
using namespace std;

class Prostokat;

class Punkt {
    
    friend void isInside(const Punkt*, const Prostokat*);

public:
    int x, y;
    Punkt(int x = 0, int y = 0): x(x), y(y){ }
};

class Prostokat {

    int x1, y1, x2, y2;
    friend void isInside(const Punkt*, const Prostokat*);

public:
    Prostokat(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0): x1(x1), y1(y1), x2(x2), y2(y2){ }
};

void isInside(const Punkt *p, const Prostokat *z) {
   if(p->x <= z->x2 && p->x >= z->x1 && p->y <= z->y2 && p->y >= z->y1)
       cout << "Punkt [" <<  p->x  <<","<< p->y << "] lezy w prostokacie\n";
    else
        cout << "Punkt [" <<  p->x  <<","<< p->y << "] lezy poza prostokatem\n";
}

int main() {
    Punkt p(7,6);
    Prostokat z(9,4,15,16);

    isInside(&p,&z);
}