#include "pch.h"
#include "menu.h"


menu::menu()
{
	char yesno = 'y';
}

char menu::getDecision() {
	while (yesno == 'Y' || 'y') {
		cout << "Do you want to restart. Y for yes, N for no. \n";
		cin >> yesno;

	if ((yesno == 'Y') || (yesno == 'y')) {
			system("cls");
			yesno = 'y';
			return 'y';
		}
	else if ((yesno == 'N') ||(yesno == 'n')) {
			system("cls");
			yesno == 'n';
			return 'n';
		}
	else {
		cout << "Enter a corrosponding choice.\n";
			continue;
		}
	}
}

menu::~menu()
{
}
