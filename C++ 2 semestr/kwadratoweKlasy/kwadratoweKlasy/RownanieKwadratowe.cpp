#include "RownanieKwadratowe.h"
#include "math.h"

void RownanieKwadratowe::seta(double a) {
	RownanieKwadratowe::a = a;
}
void RownanieKwadratowe::setb(double b) {
	RownanieKwadratowe::b = b;
}
void RownanieKwadratowe::setc(double c) {
	RownanieKwadratowe::c = c;
}
double RownanieKwadratowe::geta() {
	return a;
}
double RownanieKwadratowe::getb() {
	return b;
}
double RownanieKwadratowe::getc() {
	return c;
}
double RownanieKwadratowe::delta() {
	return (b * b) - (4 * a * c);
}
double RownanieKwadratowe::x1() {
	return (-b - sqrt(delta())) / (2 * a);
}
double RownanieKwadratowe::x2() {
	return (-b + sqrt(delta())) / (2 * a);
}
double RownanieKwadratowe::x0() {
	return -b / (2 * a);
}
RownanieKwadratowe::RownanieKwadratowe() {
	a = 0;
	b = 0;
	c = 0;
}
RownanieKwadratowe::RownanieKwadratowe(double a, double b, double c) {
	RownanieKwadratowe::a = a;
	RownanieKwadratowe::b = b;
	RownanieKwadratowe::c = c;
}