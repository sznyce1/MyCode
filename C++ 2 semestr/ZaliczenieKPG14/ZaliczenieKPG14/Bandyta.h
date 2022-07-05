#pragma once
#include "Gra.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iostream>
class Bandyta :
    public Gra
{
public:
    int Graj();
    Bandyta(int z);
    Bandyta();
    int getz();
    void setz(int x);
private:
    int z;
};

