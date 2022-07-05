#include "Prostokat.h"
void Prostokat::seta(float c) {
	a = c;
}
void Prostokat::setb(float d) {
	b = d;
}
float Prostokat::geta() {
	return a;
}
float Prostokat::getb() {
	return b;
}
float Prostokat::obliczPole() {
	return a*b;
}
Prostokat::Prostokat() {
	a = 1;
	b = 1;
}
Prostokat::Prostokat(float a, float b) {
	Prostokat::a = a;
	Prostokat::b = b;
}
