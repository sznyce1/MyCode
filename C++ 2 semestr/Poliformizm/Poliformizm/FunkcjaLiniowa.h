#pragma once
#include "Funkcja.h"
class FunkcjaLiniowa : public Funkcja
{
public:
	FunkcjaLiniowa();
	FunkcjaLiniowa(double x, double a, double b);
	double wartosc();
	void seta(double a);
	double geta();
	void setb(double b);
	double getb();
private:
	double x, a, b;
};

