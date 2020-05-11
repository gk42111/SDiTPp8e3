#include "Osoba.h"
#include <list>
#include <iostream>
#include <string>
using namespace std;
int main() {
	Osoba osoba1 = { "Jan","Kowalski",22 };
	Osoba osoba2 = { "Adam","Nowak",22 };
	Osoba osoba3 = { "Stefan","Batory",22 };

	list<Osoba> mojalista;
	list<Osoba>::iterator it;
	mojalista.push_back(osoba1);
	mojalista.push_back(osoba2);
	mojalista.push_back(osoba3);
	mojalista.sort();

	system("pause");
	return 0;
}