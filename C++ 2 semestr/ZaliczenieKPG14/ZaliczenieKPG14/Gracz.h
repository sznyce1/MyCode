#pragma once
#include "Kasa.h"
#include <string>
using namespace std;

class Gracz :
    public Kasa
{
public:
    string getNazwa();   
    void setNazwa(string name);
//    Gracz(int k);
private:
     string nazwa;

};

