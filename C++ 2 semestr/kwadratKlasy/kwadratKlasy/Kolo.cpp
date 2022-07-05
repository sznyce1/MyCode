#include "Kolo.h"
#include <math.h>

void Kolo::setr(double a) {
	r = a;
}
double Kolo::getr() {
	return r;
}
double Kolo::getpi() {
	return pi;
}
double Kolo::obliczPole() {
	return 3.14 * pow(r,2);
}
Kolo::Kolo() {
	r = 1;
}
Kolo::Kolo(double r) {
	Kolo::r = r;
}