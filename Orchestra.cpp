#include <iostream>
#include "Musician.h"
#include "Orchestra.h"

using namespace std;

#include <vector>
using std::vector;

Orchestra::Orchestra(){
    number_of_members = 0;
    Osize = 3;
}

Orchestra::Orchestra(int size){
    number_of_members=0;
    Osize = size;
    musicians = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    return number_of_members;
}

bool Orchestra::has_instrument(string instrument){
     for(int i=0; i<number_of_members; i++){
        if(musicians[i].get_instrument()==instrument){
            return true;
        }
    }
    return false;
}

Musician *Orchestra::get_members(){
    return musicians;
}

bool Orchestra::add_musician(Musician new_musician){
    if(number_of_members<Osize){
        musicians[number_of_members] = new_musician;
        number_of_members++;
        return true;
    }else{
        return false;
    }
}

Orchestra::~Orchestra(){
    
}