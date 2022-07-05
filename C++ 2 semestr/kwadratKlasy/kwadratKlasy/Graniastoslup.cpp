#include "Graniastoslup.h"

Graniastoslup::Graniastoslup() : Trapez() {
	Graniastoslup::H = 1;
	Graniastoslup::c = 1;
	Graniastoslup::d = 1;
}
Graniastoslup::Graniastoslup(float a, float b,  float h, float c, float d, float H) : Trapez(a, b, h) {
	Graniastoslup::H = H; 
	Graniastoslup::c = c;
	Graniastoslup::d = d;
}
float Graniastoslup::ObliczPole() {

	//pola nie da siê obliczyæ bez pozosta³ych boków podstawy wiêc je dodaje dopiero tutaj
	return Trapez::obliczPole() *  + Trapez::getb() + (Trapez::geta() + Graniastoslup::getc() + Graniastoslup::getd()) * Graniastoslup::H;
}
float Graniastoslup::obliczObjetisc() {
	return Trapez::obliczPole() * Graniastoslup::H;
}
float  Graniastoslup::getc() {
	return  Graniastoslup::c;
}
float  Graniastoslup::getd() {
	return  Graniastoslup::d;
}
float Graniastoslup::getH() {
	return  Graniastoslup::H;
}
