#include <iostream>
#include "Header.h"

using namespace std;

void printMenu() {
	cout << "<==========X===========>" << endl;
	cout << "1 - insert elem      - 1" << endl;
	cout << "2 - print table      - 2" << endl;
	cout << "3 - find elem        - 3" << endl;
	cout << "9 - program shutdown - 9" << endl;
	cout << "<==========X===========>" << endl;
	cout << endl;
}
string enterstr() {
	string temp;
	cin >> temp;
	return temp;
}

int main()
{
	HashTable* table = new HashTable();
	char controlButton;
	cout << "\n" << (*table).getSize();

	while (true) {
		printMenu();
		cout << (":>> ");
		cin >> controlButton;
		switch (controlButton) {
		case  ('1'):
			cout << "Enter elem :>> ";
			(*table).insert(enterstr());

			cout << ("\n\t<student add successfully>") << endl;
			break;
		case ('2'):
			(*table).print();
			break;
		case ('3'):
			cout << ("Enter elem :>> ") << endl;

			cout << "\n" << (*table).find(enterstr());
			break;
		case ('9'):
			cout << ("\t<Program shutdown>\n") << endl;
			exit(0);
			break;
		default:
			cout << ("\t<ERROR> unknown button <ERROR>") << endl;
			break;
		}
	}
}