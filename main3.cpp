#include "Fractie.hpp"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    Fractie f(7, 8), f1, f3;

    cout << f.getValoare();
    f1 = f.getInv();

    f1.afisare();
    Fractie f2(f1);
    f2.afisare();

    cout << f.getA();
    cout << f.getB();

    f.afisare();
    f1.afisare();
    f3 = f + f1;
    f3.afisare();
    f3 = f - f1;
    f3.afisare();
    f3 = f * f1;
    f3.afisare();
    f3 = f / f1;
    f3.afisare();
    f3 = -f3;
    f3.afisare();

    f3+=6;
    f3.afisare();

    f3-=4;
    f3.afisare();
    
    f3*=2;
    f3.afisare();
    
    f3/=4;
    f3.afisare();

    //f3.setdata(14,16);
    cout << endl;
    cout << (f==f3);
    
    cout << endl;
    cout << (f1!=f3);

    //f1.afisare();
    //f3.afisare();
    cout << endl;
    cout << (f1<f3);

    cout << endl;
    cout << (f1>f3);

   

    return 0;
}