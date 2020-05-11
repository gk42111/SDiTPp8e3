#include "Osoba.h"



inline bool Osoba::operator<(Osoba &s)
{
	if (wiek < s.wiek) {
		return true;
	}
	else return false;
}
