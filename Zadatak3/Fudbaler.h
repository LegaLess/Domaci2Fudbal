#ifndef _FUDBALER_H_
#define _FUDBALER_H_

#include <iostream>
#include <string>

using namespace std;

//enum Pozicije { GK, DEF, MID, FWD };

class Fudbaler {

public:

	Fudbaler(string i, string r, string p) : ime(i), reprezentacija(r), pozicija(p) {}
	Fudbaler(const Fudbaler&) = delete;

	string getIme();
	string getRep();
	string getPoz();

	Fudbaler& promeni(string);

	friend ostream& operator<<(ostream&, Fudbaler&);

private:

	string pozicija;
	string ime;
	string reprezentacija;
	
};


#endif