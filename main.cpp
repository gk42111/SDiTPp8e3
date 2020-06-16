#include "Osoba.h"
#include <list>
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
	Osoba osoba1 = { "Jan","Kowalski",3 };
	Osoba osoba2 = { "Adam","Nowak",1 };
	Osoba osoba3 = { "Stefan","Batory",2 };

	list<Osoba> mojalista;
	list<Osoba>::iterator it;
	mojalista.push_back(osoba1);
	mojalista.push_back(osoba2);
	mojalista.push_back(osoba3);
	mojalista.sort();
	for (it = mojalista.begin(); it != mojalista.end(); it++)
	{
		cout << (*it);
	}
	

	system("pause");
	return 0;
}