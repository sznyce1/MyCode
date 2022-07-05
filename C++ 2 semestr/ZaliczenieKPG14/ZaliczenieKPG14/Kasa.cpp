#include "Kasa.h"


using namespace std;

Kasa::Kasa() {
	Kasa::kasa = 1;
}
Kasa::Kasa(int k) {
	Kasa::kasa = k;
}
Kasa::~Kasa() {
	
}
int Kasa::getKasa() {
	return Kasa::kasa;
}
void Kasa::setKasa(int s) {
	Kasa::kasa = s;
}
void Kasa::Kasazmien(int i) {
	Kasa::kasa += i;
}