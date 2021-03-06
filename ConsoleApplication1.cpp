#include "pch.h"
#include "menu.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
using namespace std;

// makes esc close the program
//@return - the escape key being pressed or not
void esc();

//getname - gets the name of the user
//return - persons name
void getname();

// Determines if the user is 16 or younger
//@return - the Age of the user
bool theAge();

//Converts all answers to uppercase
void convertletters(vector<char>&);

string FirstName;
string LastName;

int main() {
	menu yourdecision;
	
	do {
		getname();
		char input;
		bool age = theAge();
		const int CAPACITY = 5;
		
		if (age == true) 
			cout << " \n";
		else 
			esc();

		vector<char> answers;
		answers.push_back('A');
		answers.push_back('A');
		answers.push_back('C');
		answers.push_back('D');
		answers.push_back('B');
		vector <char> userAnswers;

		cout << "Answer the following series of questions to get your drivers licence.\n\n" << "#1 Who has the right of way at a 4 way stop sign?\n" << "A: The person on the right side\n" << "B: The person on your left side\n" <<
			"C: The person in front\n" << "D: You\n";
		cin >> input;
		userAnswers.push_back(input);


		cout << "#2 Which seat does the driver sit in the USA?\n" << "A: The left side\n" << "B: The right side\n";
		cin >> input;
		userAnswers.push_back(input);

		cout << "#3 What do you do when you get to a red stoplight?\n" << "A: Speed up\n" << "B: Slow down and get ready to stop\n" <<
			"C: Stop\n" << "D: Make a U-Turn\n";
		cin >> input;
		userAnswers.push_back(input);

		cout << "#4 When a bus has the stop sign out, are you allowed to pass the bus when there is a divider in between?\n" << "A: Hit the bus\n" << "B: No\n" <<
			"C: Sometimes\n" << "D: Yes\n";
		cin >> input;
		userAnswers.push_back(input);

		cout << "#5 Are you allowed to park in a handicap spot if you don't have a permit?\n" << "A: Yes\n" << "B: No\n" <<
			"C: Sometimes\n";
		cin >> input;
		userAnswers.push_back(input);

		convertletters(userAnswers);

		cout << "These were your answers: \n";
		for (int i = 0; i < userAnswers.size(); i++) {

			cout << "\n#" << (i + 1) << ":" << userAnswers[i];
		}
		cout << "\n\nAnd these were the correct answers: ";
		for (int j = 0; j < userAnswers.size(); j++) {

			cout << "\n#" << (j + 1) << ":" << answers[j];

		}
		if (userAnswers == answers)
			cout << "\nYou get you licence, Congratulations " << FirstName << "!\n";
		else
			cout << "\nYou have failed the test, " << FirstName << ".";
		cout << "\n\n";
		
		
	} while (yourdecision.getDecision() == 'y');
	esc();
}

void getname() {
	cout << "Enter your first and last name: ";
	cin >> FirstName >> LastName;
}

bool theAge() {
	cout << "Enter your age: ";
	int age = 0;
	cin >> age;

	if (age >= 16) {
			cout << "You are qualified to take your test " << FirstName <<".\n";
			return (true);
	}
		else if (age <= 16) {
			cout << "You are too young to drive, " << FirstName << "\n\n";
		return (false);
	}
}

void esc() {
	cout << "Press ESC to close this program. ";
	
	while (GetAsyncKeyState(VK_ESCAPE) == 0); {
		exit(0);
	}
}

void convertletters(vector<char>& userAnswers2) {
	
	char j;

	for (unsigned int i = 0; i < userAnswers2.size(); i++) {
		 
		userAnswers2[i] = toupper(userAnswers2.at(i));
	}
}