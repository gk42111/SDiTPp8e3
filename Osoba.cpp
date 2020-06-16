#include "Osoba.h"
ostream & operator<<(ostream& wyjscie, const Osoba& s)
{
	return wyjscie << s.imie << " " << s.nazwisko << " " << s.wiek << endl;
}

bool Osoba::operator<(const Osoba & s) const
{
	return this->wiek<s.wiek;
}
