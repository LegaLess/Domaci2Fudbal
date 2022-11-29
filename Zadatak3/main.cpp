#include <iostream>
#include <string>
#include "Fudbaler.h"
#include "Pogodak.h"

using namespace std;

int main() {

	Fudbaler f1("Mitrovic", "Srbija", "FW");
	Fudbaler f2("Max", "Engleska", "DEF");
	Fudbaler f3("Embape", "Francuska", "FW");

	Pogodak p1(f3, 56);

	cout << f1 << endl;

	cout << f2 << endl;

	cout << f3 << endl;

	f1 = p1.getFudb();

	cout << p1;

	return 0;
}