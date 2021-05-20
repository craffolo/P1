//
//  Veicolo.hpp
//  Veicolo
//
//  Created by Lorenzo Trezza on 13/05/21.
//

#ifndef Veicolo_hpp
#define Veicolo_hpp

#include <iostream>

using namespace::std;
namespace craffolo {

class Veicolo {
    friend ostream &operator<<(ostream &, const Veicolo &); // da capire se servono ma penso di si
    friend istream &operator>>(istream &, Veicolo &);
private:
    char *Tipo;
    char *Marca;
public:
    Veicolo(const char * =" ", const char * =" ");
    Veicolo(const Veicolo &);
    const Veicolo &operator=(const Veicolo &);
    bool operator==(const Veicolo &) const;
    bool operator!=(const Veicolo &V) const {return !(*this==V);}
    const char *getT() {return Tipo;}
    const char *getMa() {return Marca;}
    void setT(const char *);
    void setMa(const char *);
    virtual double Pedaggio()=0;
    ~Veicolo() {delete [] Tipo; delete [] Marca;}
    
};
    
}//namespace






#endif /* Veicolo_hpp */
