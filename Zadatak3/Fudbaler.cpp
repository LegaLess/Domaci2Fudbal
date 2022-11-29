#include <iostream>
#include <string>
#include "Fudbaler.h"

using namespace std;

string Fudbaler::getIme() const
{
	return ime;
}

string Fudbaler::getRep() const
{
	return reprezentacija;
}

string Fudbaler::getPoz() const
{
	return pozicija;
}

Fudbaler& Fudbaler::promeni(string s)
{
	pozicija = s;

	return *this;
}

ostream& operator<<(ostream& it, const Fudbaler& f)
{
	cout << f.getIme() <<  "(" << f.getPoz() << ") : " << f.getRep();

	return it;
}
