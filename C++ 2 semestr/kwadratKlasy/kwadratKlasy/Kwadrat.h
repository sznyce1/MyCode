#pragma once
#include "Figura.h"

class Kwadrat : public Figura
{
public:
	void seta();
	float geta();	
	float obliczPole();
	Kwadrat();
	Kwadrat(float a);
	
private:
	float a;	
};

