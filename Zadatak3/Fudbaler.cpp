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

Pozicije Fudbaler::getPoz() const
{
	return pozicija;
}

Fudbaler& Fudbaler::promeni(Pozicije s)
{
	pozicija = s;

	return *this;
}

ostream& operator<<(ostream& it, const Fudbaler& f)
{
	cout << f.getIme() <<  "(" << f.getPoz() << ") : " << f.getRep();

	return it;
}
