#include <iostream>
#include <string>
#include "Fudbaler.h"

using namespace std;

string Fudbaler::getIme()
{
	return ime;
}

string Fudbaler::getRep()
{
	return reprezentacija;
}

string Fudbaler::getPoz()
{
	return pozicija;
}

Fudbaler& Fudbaler::promeni(string s)
{
	pozicija = s;

	return *this;
}

ostream& operator<<(ostream& it, Fudbaler& f)
{
	cout << f.getIme() <<  "(" << f.getPoz() << ") : " << f.getRep();

	return it;
}
