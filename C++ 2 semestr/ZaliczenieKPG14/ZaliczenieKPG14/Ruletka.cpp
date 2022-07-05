#include "Ruletka.h"


using namespace std;

int Ruletka::Graj() {
	char kolor;
	srand(time(NULL));
	for(int i = 0 ; i<35 ; i++){
		system("cls");
	int r = rand() % 36;	
	if (r == 0) {
		kolor = 'g';
		cout << 'g'<<endl;
	}
	else if (r % 2 == 0) {
		kolor = 'r';
		cout << 'r'<<endl;
	}
	else {
		kolor = 'b';
		cout << 'b'<<endl;
	}
	}
	if (Ruletka::getp() == 'g' && kolor == 'g') {
		
		cout << "Wygrales!!!" << endl;
		return Ruletka::getz() * 36;
	}
	else if (Ruletka::getp() == kolor) {
		
		cout << "Wygrales!" << endl;
		return Ruletka::getz() * 1.5;
	}
	else {
		
		cout << "Przegrales!" << endl;
		return 0;
	}
}
void Ruletka::setz(int z) {
	Ruletka::z = z;
}
int Ruletka::getz() {
	return Ruletka::z;
}
Ruletka::Ruletka() {
	setz(0);
}
void Ruletka::setp(int p) {
	Ruletka::pole = p;
}
int Ruletka::getp() {
	return Ruletka::pole;
}