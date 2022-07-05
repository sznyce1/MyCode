#include <iostream>
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Kolo.h"
#include "Trapez.h"
#include "Szescian.h"
#include "Prostopadloscian.h"
#include "Kula.h"
#include "Graniastoslup.h"
#include "Figura.h"



using namespace std;
float pole(Figura* x);
int main()
{
	cout << " k - kwadrat \n p - prostokat \n o - kolo \n t - trapez \n s - szescian \n P - prostopadloscian \n K - kula \n G - graniastoslup" << endl;
	bool u = true;
	do{
	char x;
	cin >> x;
	switch (x)
	{
	case 's':
	{
		cout << "podaj bok szescianu" << endl;
		float l;
		cin >> l;
		Szescian* p = new Szescian(l);
		cout << "pole: " << p->obliczPole() << endl;
		cout << "objetosc: " << p->obliczObjetisc() << endl;
		delete p;
		u = false;
		break;
	}
	case 'P':
	{
		cout << "podaj boki podstawy i wysokosc prostopadloscianu" << endl;
		float a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		Prostopadloscian* p = new Prostopadloscian(a,b,c);
		cout << "pole: " << p->obliczPole() << endl;
		cout << "objetosc: " << p->obliczObjetisc() << endl;
		delete p;
		u = false;
		break;
	}
	case 'K':
	{
		cout << "podaj promien kuli" << endl;
		float l;
		cin >> l;
		Kula* p = new Kula(l);
		cout << "pole: " << p->Obliczpole() << endl;
		cout << "objetosc: " << p->Obliczobjetosc() << endl;
		delete p;
		u = false;
		break;
	}
	case 'G':
	{
		cout << "podaj dlugosc podstaw trapezu podstawy i jego wysokosc, boki oraz wysokosc graniastoslupa" << endl;
		float a,b,h,c,d,H;
		cin >> a;
		cin >> b;
		cin >> h;
		cin >> c;
		cin >> d;
		cin >> H;
		Graniastoslup* p = new Graniastoslup(a,b,h,c,d,H);
		cout << "pole: " << p->ObliczPole() << endl;
		cout << "objetosc: " << p->obliczObjetisc() << endl;
		delete p;
		u = false;
		break;
	}


	case 'k':
	{
		cout << "podaj bok kwadratu" << endl;
		float l;
		cin>>l;
		Kwadrat* p = new Kwadrat(l);
		cout << "pole: " << p->obliczPole() << endl;
		delete p;
		u = false;
		break;
	}
	case'p':
	{
		cout << "podaj boki prostokata" << endl;
		float m , n;
		cin >> m;
		cin >> n;
		Prostokat* d = new Prostokat(m,n);
		cout << "pole: " << d->obliczPole() << endl;
		delete d;
		u = false;
		break;
	}
	case'o':
	{
		cout << "podaj promien kola" << endl;
		double r;
		cin >> r;
		Kolo* o = new Kolo(r);
		cout << "pole: "<< o->obliczPole() << endl;
		delete o;
		u = false;
		break;
	}
	case 't':
	{
		cout << "podaj podstawy i wysokosc trapezu" << endl;
		float a, b, h;
		cin >> a;
		cin >> b;
		cin >> h;
		Trapez* j = new Trapez(a , b , h);
		cout << "pole: " << j->obliczPole() << endl;
		delete j;
		u = false;
		break;
	}
	default: 
		cout << "blad wejscia" << endl;
		
	}
	} while (u);

	Trapez z(5,1,1);
	Prostokat o(5,1);
	Kwadrat p(5);
	//cout << pole(&z) << endl;
	//cout << pole(&o) << endl;
	//cout << pole(&p) << endl;
	double s=0;
	Figura* A[] = { &z, &o, &p };
	for (int i = 0; i < 3; i++) {
		s += pole(A[i]);
	}
	cout << s;
	return 0;
}

float pole(Figura* x) {
	return x->obliczPole();
}