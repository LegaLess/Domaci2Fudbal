#include <iostream>
#include <string>
#include "Fudbaler.h"
#include "Pogodak.h"

using namespace std;

int main() {

	

	Fudbaler f1("Mitrovic", "Srbija", FWD);
	Fudbaler f2("Max", "Engleska", DEF);
	Fudbaler f3("Embape", "Francuska", FWD);

	Pogodak p1(f3, 56);

	cout << f1.getPoz() << endl;

	f1.promeni(GK);

	cout << f1.getPoz() << endl;

	return 0;
}