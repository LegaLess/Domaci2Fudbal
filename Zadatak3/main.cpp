#include <iostream>
#include <string>
#include "Fudbaler.h"

using namespace std;

int main() {

	Fudbaler f1("Mitrovic", "Srbija", "FW");
	Fudbaler f2("Max", "Engleska", "DEF");
	Fudbaler f3("Embape", "Francuska", "FW");

	cout << f1 << endl;

	cout << f2 << endl;

	cout << f3 << endl;

	return 0;
}