#include "Kula.h"

Kula::Kula(double r) :Kolo(r){

}
Kula::Kula() : Kolo() {

}

double Kula::Obliczpole() {
	
	return  Kolo::obliczPole();
}
double Kula::Obliczobjetosc() {
	return (4 / 3) * Kolo::obliczPole() * Kolo::getr();
}