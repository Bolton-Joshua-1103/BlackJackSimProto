#include "Card.h"

#define dbgln(x) std::cout << #x << ": " << (x) << std::endl;

Card::Card(){
    std::cout << " DEFAULT CARD MADE" << std::endl;
}

Card::Card(std::string _name, Suite _suite, int _value) : name{_name}, suite{_suite}, value{_value}{
    // std::cout << "New Card: " << std::endl;
    // dbgln(name);
    // dbgln(suite);
    // dbgln(value);
}

Card::operator std::string(){
    return name + " of ";
}