#include "Szescian.h"

Szescian::Szescian(float a) : Kwadrat ( a ) {
	
}
Szescian::Szescian() : Kwadrat() {

}
float Szescian::obliczPole(){
	return 6 * Kwadrat::obliczPole();
}
float Szescian::obliczObjetisc() {
	return Kwadrat::obliczPole() * Kwadrat::geta();
}