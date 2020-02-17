#pragma once
#include <iostream>

using namespace std;

class menu
{
	public:
		//Default Constructor
		menu();

		//Default Deconstructor
		~menu();

		//Accessor Functions
		char getDecision();
		

	private:
		int decision;
		char yesno;
};

