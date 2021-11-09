#include "Fractie.hpp"

Fractie::Fractie(int aa, int bb)
{
    setdata(aa, bb);
}

Fractie::Fractie(const Fractie &obj)
{
    // cout << "Constructor de copiere\n";
    this->a = obj.a;
    this->b = obj.b;
}

Fractie &Fractie::operator=(const Fractie &obj)
{
    this->a = obj.a;
    this->b = obj.b;
    return *this;
}

Fractie::~Fractie()
{
}

double Fractie::getValoare()
{
    return (double)a / b;
}

void Fractie::setdata(int aa, int bb)
{
    a = aa;
    if (bb != 0)
        b = bb;
    else
        b = 1;
}

Fractie Fractie::getInv()
{
    Fractie reverse;
    reverse.a = b;
    reverse.b = a;
    return reverse;
}

void Fractie::afisare()
{
    cout << endl;
    cout << a;
    cout << "/";
    cout << b;
}

float Fractie::getA()
{
    cout << endl;
    return a;
}

float Fractie::getB()
{
    cout << endl;
    return b;
}

Fractie operator+(const Fractie &f1, const Fractie &f2)
{
    Fractie rez;
    rez.a = f1.a * f2.b + f1.b * f2.a;
    rez.b = f1.b * f2.b;
    return rez;
}

Fractie operator-(const Fractie &f1, const Fractie &f2)
{
    Fractie rez;
    rez.a = f1.a * f2.b - f1.b * f2.a;
    rez.b = f1.b * f2.b;
    return rez;
}

Fractie operator*(const Fractie &f1, const Fractie &f2)
{
    Fractie rez;
    rez.a = f1.a * f2.a;
    rez.b = f1.b * f2.b;
    return rez;
}

Fractie operator/(const Fractie &f1, const Fractie &f2)
{
    Fractie rez;
    rez.a = f1.a * f2.b;
    rez.b = f1.b * f2.a;
    return rez;
}

Fractie operator-(const Fractie &f1)
{
    Fractie rez;
    rez.a = f1.a * (-1);
    rez.b = f1.b;
    return rez;
}

Fractie& Fractie::operator-=(const Fractie & a)
{
    *this = *this - a;
}

Fractie& Fractie::operator*=(const Fractie & a)
{
    *this = *this * a;
}

Fractie& Fractie::operator/=(const Fractie & a)
{
    *this = *this / a;
}

bool Fractie::operator==(const Fractie & egal)
{   
    if(a*egal.b == b*egal.a) 
        return true;
    else return false;

}

bool Fractie::operator!=(const Fractie & diferit)
{

    if(a*diferit.b != b*diferit.a) 
            return true;
        else return false;

}

bool Fractie::operator<(const Fractie & mic)
{
    if(a*mic.b < b*mic.a) 
            return true;
        else return false;

}

bool Fractie::operator>(const Fractie & mare)
{
    if(a*mare.b > b*mare.a) 
            return true;
        else return false;

}