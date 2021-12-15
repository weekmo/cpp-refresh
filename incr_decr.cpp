#include <iostream>
using namespace std;

class Num
{
    int value = 0;

public:
    //Num(){puts("Constructor");}
    ~Num(){puts("Destructor");}
    Num(int x = 0) : value(x){puts("Constructor");}
    int getValue() const { return value; }
    void setValue(const int &x) { value = x; }
    Num &operator++();
    Num operator++(int);
    Num &operator--();
    Num operator--(int);
};

Num & Num::operator++ (){
    cout << "pre-increment: ";
    value += 1;
    return *this;
}

Num Num::operator++ (int){
    cout << "post-increment: ";
    Num temp = *this;
    value +=1;
    return temp;
}

Num & Num::operator-- (){
    cout << "pre-decrement: ";
    value -= 1;
    return *this;
}

Num Num::operator-- (int){
    cout << "post-decrement: ";
    Num temp = *this;
    value -=1;
    return temp;
}

ostream & operator<< (ostream & o, const Num & rhs){
    return o << rhs.getValue();
}

int main(){
    Num n = 42;
    Num * b = new Num;
    b->setValue(5);
    cout << "Value of b is: " << *b << endl;
    delete b;
    cout << "Value is: " << n << endl;
    cout << "Value is: " << ++n << endl;
    cout << "Value is: " << n << endl;

    cout << "Value is: " << n << endl;
    cout << "Value is: " << n++ << endl;
    cout << "Value is: " << n << endl;
    return 0;
}