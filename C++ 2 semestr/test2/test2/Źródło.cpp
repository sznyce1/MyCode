#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float a , b , c ,d , x1 , x2 , x0 ;
	cin >> a;
	while (cin.good() == false || a == 0) {
		cin.clear();
		cin.ignore(999999, '\n');
		cout << "blad wejscia" << endl;
		cin >> a;
	}
	cin >> b;
	while (cin.good() == false) {
		cin.clear();
		cin.ignore(999999, '\n');
		cout << "blad wejscia" << endl;
		cin >> b;
	}
	cin >> c;
	while (cin.good() == false) {
		cin.clear();
		cin.ignore(999999, '\n');
		cout << "blad wejscia" << endl;
		cin >> c;
	}

	d = (b*b) - (4 * a * c);
	if (d < 0)
		cout << "brak rozwiazan rzeczywistych" << endl;
	else if (d == 0) {
		x0 = (-b) / 2 * a;
		cout << "pierwiastek to:" << x0 << endl;
	}
	else if (a == 0){
		cout << "a nie mo¿e wynosiæ 0" << endl;
	}
	else{
	x1 = (-b - sqrt(d)) / 2 * a;
	x2 = (-b + sqrt(d)) / 2 * a;
	cout <<"pierwiastki to:" << x1 << "  i  " << x2 << endl;
	}
			
	return 0;
}