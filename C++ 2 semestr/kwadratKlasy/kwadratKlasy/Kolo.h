#pragma once

class Kolo 
{
public:
	void setr(double a);
	double getr();
	double getpi();
	double obliczPole();	 
	Kolo();
	Kolo(double r);


private:
	double r;
	double pi = 3.14;

};

