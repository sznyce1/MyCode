#include "Trapez.h"
void 	Trapez::seta(float c) {
	a = c;
}
void  	Trapez::setb(float d) {
	b = d;
}
void  	Trapez::seth(float z) {
	h = z;
}
float	Trapez::geta() {
	return a;
}
float 	Trapez::getb() {
	return b;
}
float  	Trapez::geth() {
	return h;
}
float Trapez::obliczPole() {
	return ((a + b) * h) / 2;
}
Trapez::Trapez() {
	a = 1;
	b = 1;
	h = 1;
}
Trapez::Trapez(float a, float b, float h) {
	Trapez::a = a;
	Trapez::b = b;
	Trapez::h = h;
}