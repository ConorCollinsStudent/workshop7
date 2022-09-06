#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream>
using namespace std;

class Musician{
    
    protected:
        string Minstrument;
        int Mexperience;
    public:
        Musician();
        Musician(std::string instrument, int experience);
        std::string get_instrument();
        int get_experience();
        ~Musician();
        
};
#endif

