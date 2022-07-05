#pragma once
#include "Trapez.h"
class Graniastoslup :  public Trapez
{
public:
	Graniastoslup();
	Graniastoslup(float a, float b, float h, float c, float d, float H);
	float ObliczPole();
	float obliczObjetisc();
	float getH();
	float getc();
	float getd();
	

private:
	float H , c, d;
};

