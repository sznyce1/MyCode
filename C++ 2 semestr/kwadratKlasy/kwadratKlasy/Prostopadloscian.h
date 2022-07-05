#pragma once
#include "Prostokat.h"
class Prostopadloscian :    public Prostokat
{
public:

	Prostopadloscian();
	Prostopadloscian(float a, float b, float c);
	float obliczPole();
	float obliczObjetisc();
	float getc();

private:
	float c;
};

