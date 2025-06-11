#include <iostream>
#include "String.h"
using namespace std;

int main() {

	String n1 = "Talha";
	String n2 = "Obaid";
	
	cout << n1;
	cout << n2;
	n1 = n2;
	cout << n1;
	cout << n2;

	return 0;
}