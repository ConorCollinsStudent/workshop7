#include <iostream>
#include "Musician.h"

using namespace std;

Musician::Musician(){
    string instrument = "null";
    int experience = 0;
};

Musician::Musician(string instrument, int experience){
    Minstrument = instrument;
    Mexperience = experience;
};

string Musician::get_instrument(){
    return Minstrument;
};

int Musician::get_experience(){
    return Mexperience;
};

Musician::~Musician(){

};

