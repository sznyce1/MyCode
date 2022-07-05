#pragma once
#include "Gra.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iostream>

class Ruletka :
    public Gra
{
public:
    int Graj();
    void setz(int z);
    int getz();
    void setp(int p);
    int getp();
    Ruletka();
private:
    int z;
    char pole;
};

