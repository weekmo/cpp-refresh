#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

class Rational
{
    int _n = 0;
    int _d = 1;

public:
    Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator){};
    Rational(const Rational &rhs) : _n(rhs._n), _d(rhs._d){}; // Copy constructuer
    ~Rational();
    int numenator() const { return _n; };
    int denominator() const { return _d; };
    Rational &operator=(const Rational &);
    operator string() const;
};

Rational &Rational::operator=(const Rational &rhs)
{
    if (this != &rhs)
    {
        _d = rhs._d;
        _n = rhs._n;
    }
    return *this;
}

Rational operator+(const Rational &lhs, const Rational &rhs)
{
    return Rational((lhs.numenator() * rhs.denominator()) + (lhs.denominator() * rhs.numenator()),
                    lhs.denominator() * rhs.denominator());
}

Rational operator-(const Rational &lhs, const Rational &rhs)
{
    return Rational((lhs.numenator() * rhs.denominator()) - (lhs.denominator() * rhs.numenator()),
                    lhs.denominator() * rhs.denominator());
}

Rational operator*(const Rational &lhs, const Rational &rhs)
{
    return Rational(lhs.numenator() * rhs.numenator(), lhs.denominator() * rhs.denominator());
}

Rational operator/(const Rational &lhs, const Rational &rhs)
{
    return Rational(lhs.numenator() * rhs.denominator(), lhs.denominator() * rhs.numenator());
}

Rational::~Rational()
{
    _n = 0;
    _d = 1;
}

// for std::cout
ostream &operator<<(ostream &o, const Rational &r)
{
    return o << string(r);
}

Rational::operator string() const
{
    if (_d == 1)
    {
        return to_string(_n);
    }
    else
    {
        return to_string(_n) + "/" + to_string(_d);
    }
}

int main(){
    Rational a(5,3);
    cout << "a is: " << a << endl;
    string s = "Rational value is: ";
    s += a;

    cout << s << endl;

    return 0;
}