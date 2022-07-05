#pragma once
#include "Gra.h"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

class oczko :
    public Gra
{
public:
    void setz(int z);
    int getz();
    int Graj();
    string losuj();
    int wartosc(string karta);
private:
};

