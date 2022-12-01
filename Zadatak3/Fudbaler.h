#ifndef _FUDBALER_H_
#define _FUDBALER_H_

#include <iostream>
#include <string>

using namespace std;

enum Pozicije { GK, DEF, MID, FWD };

class Fudbaler {

public:

	Fudbaler(string i, string r, Pozicije p) : ime(i), reprezentacija(r), pozicija(p) {}
	Fudbaler(const Fudbaler&) = delete;

	string getIme() const;
	string getRep() const;
	Pozicije getPoz() const;

	Fudbaler& promeni(Pozicije);

	friend ostream& operator<<(ostream&, const Fudbaler&);

private:

	Pozicije pozicija;
	string ime;
	string reprezentacija;
	
};


#endif