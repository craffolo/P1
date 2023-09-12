//
//  main.cpp
//  Veicolo
//
//  Created by Lorenzo Trezza on 13/05/21.
//
//

#include <iostream>
#include <cstring>
#include "autoveicolo.hpp"

using namespace std;
using namespace craffolo;

int main(int argc, const char * argv[]) {
    
    Veicolo *VPtr;
    Autoveicolo A("A1B2C3D4","Pegeaut","208",2);
    Autoveicolo A1("E5F6G7H8","Citroen","C4 Picasso",2);
    Autoveicolo A2("Q1W2E3R4","Fiat","Un camion",4);
    Autoveicolo ACpy(A);

    cout<<A<<endl;
    cout<<ACpy<<endl;
    cout<<A1<<endl;
    A1=A;
    cout<<A1<<endl;
    cout<<A2<<endl;
    cout<<endl;
    
    if(A==A1) cout<<"A è uguale ad A1"<<endl;
    else cout<<"A è diverso da A1"<<endl;
    cout<<endl;
    
    if(A==A2) cout<<"A è uguale ad A2"<<endl;
    else cout<<"A è diverso da A2"<<endl;
    cout<<endl;
    
    if(A2<A) cout<<"A2 è di classe minore rispetto ad A1"<<endl;
    else cout<<"A2 non è di classe minore rispetto ad A1"<<endl;
    cout<<endl;
    
    if(A>A2) cout<<"A1 è di classe maggiore rispetto ad A2"<<endl;
    else cout<<"A1 non è di classe maggiore rispetto ad A2"<<endl;
    cout<<endl;
    
    cout<<"Costo pedaggio A: "<<A.Pedaggio()<<endl;
    cout<<"Costo pedaggio A2: "<<A2.Pedaggio()<<endl;
    cout<<endl;
    
    return 0;
}
