//
//  Veicolo.cpp
//  Veicolo
//
//  Created by Lorenzo Trezza on 13/05/21.
//

#include "veicolo.hpp"
#include <iostream>

using namespace std;
namespace craffolo {

//FRIENDS
ostream &operator<<(ostream &out, const Veicolo &V){
    out<<V.Tipo<<" "<<V.Marca;
    return out;
}

istream &operator>>(istream &in, Veicolo &V){
    char buffer[444];
    in.getline(buffer, 444);
    V.setT(buffer);
    in.getline(buffer, 444);
    V.setMa(buffer);
    return in;
}

//VEICOLO
Veicolo::Veicolo(const char *T, const char *Ma){
    Tipo= new char[strlen(T)+1];
    strcpy(Tipo, T);
    Marca= new char[strlen(Ma)+1];
    strcpy(Marca, Ma);
}

Veicolo::Veicolo(const Veicolo &V){
    Tipo= new char[strlen(V.Tipo)+1];
    strcpy(Tipo, V.Tipo);
    Marca= new char[strlen(V.Marca)+1];
    strcpy(Marca, V.Marca);
}

const Veicolo &Veicolo::operator=(const Veicolo &V){
    if(this!=&V) {
        setT(V.Tipo);
        setMa(V.Marca);
    }
    return *this;
}

bool Veicolo::operator==(const Veicolo &V) const{
    return ((strcmp(Tipo, V.Tipo)+strcmp(Marca, V.Marca))==0);
}

void Veicolo::setT(const char *T){
    delete [] Tipo;
    Tipo=new char[strlen(T)+1];
    strcpy(Tipo, T);
}

void Veicolo::setMa(const char *Ma){
    delete [] Marca;
    Marca=new char[strlen(Ma)+1];
    strcpy(Marca, Ma);
}

}//namespace


