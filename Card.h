#ifndef _CARD
#define _CARD
#include <string>
#include <iostream>
#include "Suites.cpp"

class Card{
    private:
        std::string name;
        Suite suite;
        int value;
    public:
        Card();
        Card(std::string, Suite, int);
        operator std::string();
};
#endif