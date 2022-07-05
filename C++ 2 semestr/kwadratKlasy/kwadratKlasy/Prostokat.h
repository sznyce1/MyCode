#pragma once
#include "Figura.h"

class Prostokat : public Figura
{
public:
	void seta(float c);
	void setb(float d);
	float geta();
	float getb();
	float obliczPole();
	Prostokat();
	Prostokat(float a, float b);


private:
	float a;
	float b;

};



