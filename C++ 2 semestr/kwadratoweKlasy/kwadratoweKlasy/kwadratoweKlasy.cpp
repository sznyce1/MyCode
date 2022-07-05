#include <iostream>
#include "RownanieKwadratowe.h"

using namespace std;

int main()
{
	RownanieKwadratowe r;
	double num;
	cout << "podaj a: ";
	cin >> num;
	r.seta(num);
	while(r.geta()==0){
	cout << "a nie moze byc = 0 gdyz powstaje wtedy funkcja liniowa ";
	cin.ignore(1111, '\n');
	cout << "podaj a: ";
	cin >> num;
	r.seta(num);
	}
	cout << "podaj b: ";
	cin >> num;
	r.setb(num);
	cout << "podaj c: ";
	cin >> num;
	r.setc(num);
	cout << "dleta = " << r.delta() << endl;
	if (r.delta() > 0) {
		cout << "Pierwiastki rownania x1= " << r.x1() << " x2= " << r.x2() << endl;
	}
	else if (r.delta()==0) {
		cout << "x0= " << r.x0()<< endl;
	}
	else {
		cout << "Brak pierwiastkow rzeczywistych";
	}


	return 0;
}

