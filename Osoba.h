#pragma once
#include <iostream>
#include <string>
using namespace std;
class Osoba
{
public:
	string imie;
	string nazwisko;
	int wiek;
	inline bool operator< (Osoba &);
};

