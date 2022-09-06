#include <iostream>
#include "Musician.h"
#include "Orchestra.h"

using namespace std;


int main(){
    Musician *greg, *sarah, *bob, *steve;
    Orchestra Or;

    greg = new Musician("Obo", 15);
    sarah = new Musician("Theromin", 85);
    bob = new Musician("Drums", 1);
    steve = new Musician("Cannon",4);

    if(Or.add_musician(*greg)==false){cout<<"Orchestra is full"<<endl;}
    if(Or.add_musician(*sarah)==false){cout<<"Orchestra is full"<<endl;}
    if(Or.add_musician(*bob)==false){cout<<"Orchestra is full"<<endl;}
    if(Or.add_musician(*steve)==false){cout<<"Orchestra is full"<<endl;}

}