#pragma once
#include "Funkcja.h"
class FunkcjaKwadratowa : public Funkcja
{
public:
	double wartosc();
	void seta(double a);
	double geta();
	void setb(double b);
	double getb();
	void setc(double c);
	double getc();
private:
	double a, b, c;
};

