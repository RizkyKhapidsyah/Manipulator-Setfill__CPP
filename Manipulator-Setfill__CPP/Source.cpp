#include <iostream>
#include <conio.h>
#include <iomanip>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	int a;

	cout << "Penggunan Manipulator setfill()" << "\n\n";
	cout << "-------------------------------" << "\n";

	for (a = 1; a <= 15; a++) {
		cout << setfill('-');
		cout << setw(a) << a << endl;
	}
	
	_getch();
	return 0;
}