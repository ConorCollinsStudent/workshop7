#include <iostream>
#include "Musician.h"
#include 'Orchestra.h'

using namespace std;

Orchestra::Orchestra(){
    number_of_members = 0;
    Osize = 5;
}

Orchestra::Orchestra(int size){
    Osize = size;
}

int Orchestra::get_current_number_of_members(){
    return number_of_members;
}

bool Orchestra::has_instrument(string instrument){
    
}
Musician Orchestra::*get_members(){
    return ;
}
bool Musician::add_musician(Musician new_musician){
    if(number_of_members<Osize){
        return true;
    }else{
        return false;
    }
}
Orchestra::~Orchestra(){
    
}