#include<iostream>
#include<string.h>
using namespace std;

#include "animal.h"

int main() {
	animal a1;
	animal a2;

	a1.species= "lion";
	a2.species = "tiger";
	a1.display_details();
	cout << "Name is " << a1.species <<"\n";
	cout << "Name is " << a2.species <<"\n";
	
	return 0;
}
