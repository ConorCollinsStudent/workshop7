#include <iostream>
#include "Musician.h"

using namespace std;


int main(){

    Musician *greg, *sarah;

    greg = new Musician("Obo", 15);
    sarah = new Musician("Theromin", 85);

    cout<<greg->get_instrument()<<endl;
    cout<<greg->get_experience()<<endl;
    cout<<sarah->get_instrument()<<endl;
    cout<<sarah->get_experience()<<endl;

}