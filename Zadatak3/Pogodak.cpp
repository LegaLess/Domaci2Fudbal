#include <iostream>
#include <string>
#include "Fudbaler.h"
#include "Pogodak.h"

using namespace std;


Fudbaler& Pogodak::getFudb()
{
	return fudbaler;
}

ostream& operator<<(ostream& it, Pogodak& p) {
	it << "[" << p.minut << "']" << " - " << p.fudbaler;

	return it;
}
