#include <iostream>
#include <string>
#include "Fudbaler.h"
#include "Pogodak.h"

using namespace std;


Fudbaler& Pogodak::getFudb() const
{
	return fudbaler;
}

ostream& operator<<(ostream& it, const Pogodak& p) {
	it << "[" << p.minut << "']" << " - " << p.fudbaler;

	return it;
}
