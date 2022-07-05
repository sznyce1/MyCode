#include "Gracz.h"

using namespace std;

string Gracz::getNazwa() {
	return Gracz::nazwa;
}
void Gracz::setNazwa(string name) {
	Gracz::nazwa = name;
}
//Gracz::Gracz(int k) {
//	Gracz::setKasa(k);
//}