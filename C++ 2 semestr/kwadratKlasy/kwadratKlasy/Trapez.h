#pragma once
#include "Figura.h"


class Trapez : public Figura
{
public:
	void 	seta(float c);
	void  	setb(float d);
	void	seth(float z);
	float	geta();
	float	getb();
	float	geth();

	float obliczPole();
	Trapez();
	Trapez(float a, float b, float h);


private:
	float a;
	float b;
	float h;

};

