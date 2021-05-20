//
//  Autoveicolo.cpp
//  Veicolo
//
//  Created by Lorenzo Trezza on 13/05/21.
//

#include "autoveicolo.hpp"
#include <iostream>

using namespace::std;
namespace craffolo {

//FRIENDS
ostream &operator<<(ostream &out, const Autoveicolo &A){
    out<<(Veicolo &)A<<" "<<A.Modello<<" "<<A.Classe;
    return out;
}

istream &operator>>(istream &in, Autoveicolo &A){
    char buffer[444];
    in.getline(buffer, 444);
    A.setMo(buffer);
    in>>A.Classe;   // va bene?
    return in;
}

//AUTOVEICOLO
Autoveicolo::Autoveicolo(const char *T, const char *Ma, const char *Mo, const int &C) : Veicolo(T,Ma) {
    Modello= new char[strlen(Mo)+1];
    strcpy(Modello, Mo);
    Classe=C;
}

Autoveicolo::Autoveicolo(const Autoveicolo &A) : Veicolo(A) {
    Modello= new char[strlen(A.Modello)+1];
    strcpy(Modello, A.Modello);
    Classe=A.Classe;
}

const Autoveicolo &Autoveicolo::operator=(const Autoveicolo &A){
    if(this!=&A) {
        Veicolo::operator=(A);
        setMo(A.Modello);
        setC(A.Classe);
    }
    return *this;
}

bool Autoveicolo::operator==(const Autoveicolo &A) const{
    return (Veicolo::operator==(A)&&(!strcmp(Modello, A.Modello)&&Classe==A.Classe));
}

bool Autoveicolo::operator<(const Autoveicolo &A) const{
    if(Classe<A.Classe) return 1;
    else return 0;
}

bool Autoveicolo::operator>(const Autoveicolo &A) const{
    if(Classe>A.Classe) return 1;
    else return 0;
    return 1;
}

void Autoveicolo::setMo(const char *Mo){
    delete [] Modello;
    Modello=new char[strlen(Mo)+1];
    strcpy(Modello, Mo);
}

double Autoveicolo::Pedaggio(){
    
    switch(Classe){
        case 2:             //Autovetture ed altri veicoli a due assi
            return 1.00;
            break;
        case 3:             //Veicoli a tre assi
            return 1.60;
            break;
        case 4:             //Veicoli a quattro assi
            return 2.05;
            break;
        case 5:             //Veicoli a cinque assi
            return 2.55;
            break;
        case 6:             //Veicoli a sei assi
            return 3.00;
            break;
        case 7:             //Veicoli a sette asse
            return .45;
            break;
        case 8:             //Veicoli a otto assi
            return 3.90;
            break;
        default:
            return 0;
    }
}

}//namespace
