#include "Prostopadloscian.h"
Prostopadloscian::Prostopadloscian() : Prostokat() {
	Prostopadloscian::c = 1;
}
Prostopadloscian::Prostopadloscian(float a, float b , float c) : Prostokat( a, b) {
	Prostopadloscian::c = c;
}
float Prostopadloscian::obliczPole() {
	return (Prostokat::obliczPole() * 2) + ((c * Prostokat::getb()) * 2) + ((c * Prostokat::geta()) * 2);
}
float Prostopadloscian::obliczObjetisc() {
	return Prostokat::geta() * Prostokat::getb() * Prostopadloscian::c;
}
float Prostopadloscian::getc(){
	return Prostopadloscian::c;
}
