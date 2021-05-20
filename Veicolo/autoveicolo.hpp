//
//  Autoveicolo.hpp
//  Veicolo
//
//  Created by Lorenzo Trezza on 13/05/21.
//

#ifndef Autoveicolo_hpp
#define Autoveicolo_hpp

#include <iostream>
#include "veicolo.hpp"

using namespace::std;
namespace craffolo {

class Autoveicolo : public Veicolo {
    friend ostream &operator<<(ostream &, const Autoveicolo &);
    friend istream &operator>>(istream &, Autoveicolo &);
private:
    char *Modello;
    int Classe;
public:
    Autoveicolo(const char * =" ", const char * =" ", const char * =" ", const int & =0);
    Autoveicolo(const Autoveicolo &);
    const Autoveicolo &operator=(const Autoveicolo &);
    bool operator==(const Autoveicolo &) const;
    bool operator!=(const Autoveicolo &A) const {return !(*this==A);}
    bool operator<(const Autoveicolo &) const;
    bool operator>(const Autoveicolo &) const;
    const char *getMo() {return Modello;}
    const char getC() {return Classe;}
    void setMo(const char *);
    void setC(const int &C) {Classe=C;}
    virtual double Pedaggio();
    ~Autoveicolo() {delete [] Modello;}
};

}//namespace

#endif /* Autoveicolo_hpp */
