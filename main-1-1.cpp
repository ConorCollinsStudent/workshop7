#include <iostream>
#include "Musician.h"

using namespace std;


int main(){
    
    Musician *greg, *sarah;
    
    greg = new Musician("Obo", 15);
    sarah = new Musician("Theromin", 85);
    
    cout<<greg->get_instrument();
    cout<<greg->get_experience();
    cout<<sarah->get_instrument();
    cout<<sarah->get_experience();
    
}