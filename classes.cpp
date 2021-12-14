#include <cstdio>
#include <string>

const std::string unk = "unknown";

class Animal {
    std::string a_type = "";
    std::string a_name ="";
    std::string a_sound = "";

public:
    Animal();
    Animal(const std::string &type, const std::string &name, const std::string &sound);
    Animal(const Animal &);
    ~Animal();
    Animal & operator = (const Animal &);
    void print() const;
};

Animal::Animal() : a_type(unk), a_name(unk), a_sound(unk){
 puts("Constructure !");
}

Animal::Animal(const std::string &type, const std::string &name, const std::string &sound){
    puts("Constructure with args!");
}

class Card{
    int num = 0;

public:
    Card(const int &);
    int number() const { return num;};
    //Card & operator = (const Card &);
    //Card operator + (const Card &);
    Card operator - (const Card &);
    Card operator / (const Card &);
    Card operator * (const Card &);
};

Card::Card(const int &num){
    this->num = num;
}
/*
Card Card::operator+ (const Card &card){
    return Card(this-> num + card.num);
}
*/
Card operator + (const Card &l_card, const Card &r_card){
    return Card(l_card.number() + r_card.number());
}

Card Card::operator - (const Card &card){
    return Card(this-> num - card.num);
}

Card Card::operator * (const Card &card){
    return Card(this-> num * card.num);
}

Card Card::operator / (const Card &card){
    return Card(this-> num / card.num);
}

int main(){
    Card c = 7;
    Card b = 8;
    Card a = b+c;

    printf("a = b + c -> %d = %d + %d\n", a, b, c);

    c = c+6;
    b = 8 + b;

    printf("b = %d, c = %d\n", b, c);
}