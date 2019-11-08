#include <iostream>
#include <string.h>
#include <fstream>
#include "Book.h"

using namespace std;

int main()
{
	cout << "\t\t ********************** \t\t\t" << endl;
	cout << "\t\t ****UNICORN CINEMA**** \t\t\t" << endl;
	cout << "\t\t ********************** \t\t\t" << endl;

	book b;
	b.signin();
	b.connect();

	return 0;
}