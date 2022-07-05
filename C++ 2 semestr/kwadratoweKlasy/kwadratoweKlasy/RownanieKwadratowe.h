#pragma once
class RownanieKwadratowe
{
public:
	void seta(double a);
	void setb(double b);
	void setc(double c);
	double geta();
	double getb();
	double getc();
	double delta();
	double x1();
	double x2();
	double x0();
	RownanieKwadratowe();
	RownanieKwadratowe(double a , double b , double c);
	
private:
	double a, b, c;
};

