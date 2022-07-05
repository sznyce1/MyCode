#include "Bandyta.h"


using namespace std;

int Bandyta::Graj()
{
	
	srand(time(NULL));
	int w = rand() % 9;
	int i = 0;
	char z1;
	char z2;
	char z3;
	while(i!=35){
	int c1 = rand() % 5 + 97;
	int c2 = rand() % 5 + 97;
	int c3 = rand() % 5 + 97;
	z1 = c1;
	z2 = c2;
	z3 = c3;
	if (i == 34 && w == 1) {
		z1 = z2 = z3;
	}
	cout <<"   "<< z1 << z2 << z3 << endl;
	i++;
	system("cls");
	}
	cout <<"   "<< z1 << z2 << z3 << endl;
	if (z1 == z2 && z2 == z3) {
		cout << "Wygrales!" <<endl;
		return Bandyta::getz() * 10;
	}
	else {
		cout << "Przegrales!" << endl;
		return 0;
	}
	

	//return 1;
}
Bandyta::Bandyta(int z) {
	Bandyta::z = z;
}
Bandyta::Bandyta() {
	Bandyta::z = 0;
}
int Bandyta::getz() {
	return Bandyta::z;
}
void Bandyta::setz(int x) {
	Bandyta::z = x;
}