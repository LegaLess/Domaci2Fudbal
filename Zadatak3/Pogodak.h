#ifndef _POGODAK_H_
#define _POGODAK_H_
#include <iostream>
#include <string>
#include "Fudbaler.h"

using namespace std;

class Pogodak {

public:

	Pogodak(Fudbaler& f, int m) : fudbaler(f), minut(m) {}

	Fudbaler& getFudb() const;

	friend ostream& operator<<(ostream&, const Pogodak&);

private:

	Fudbaler& fudbaler;
	int minut;

};


#endif