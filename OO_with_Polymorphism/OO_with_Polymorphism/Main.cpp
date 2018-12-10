#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "Characters.h"
using namespace std;

// a function used to display the list of characters created
void showCharacters();

// a vector that holds a list of character objects created and a character pointer
vector<Characters *> characterList;
Characters * charPtr;

void main()
{
	//Variables created to hold inputed information and 2 pointers
	string inString1, inString2;
	int inValue1, inValue2;
	int choice;
	Goblin * gobPtr;
	Zombie * zombPtr;
	
	//a loop that has the user create characters until they quit the program
	do
	{
		// display menu for the user and gets choice from user
		cout << "\nMenu for entering shape:\n";
		cout << "1: To enter a Goblin\n";
		cout << "2: To enter a Zombie\n";
		cout << "3: To enter a Normal Character\n";
		cout << "99: Finish entering\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice)
		{
			//if the user chose to create a goblin then itll go through this case and create a goblin
		case 1:
			cout << "Goblin Name: ";
			cin >> inString1;
			cout << "Goblin Health: ";
			cin >> inValue1;
			cout << "Goblin Weapon: ";
			cin >> inString2;
			cout << "Goblin Weapon Damage: ";
			cin >> inValue2;
			gobPtr = new Goblin(inString1, inString2, inValue1, inValue2);
			characterList.push_back(gobPtr);
			break;
		
			//case 2 is if the user decides to create a zombie
		case 2:
			cout << "Zombie Name: ";
			cin >> inString1;
			cout << "Zombie Health: ";
			cin >> inString2;
			cout << "Zombie Bite Damage: ";
			cin >> inValue1;
			zombPtr = new Zombie(inString1, inValue1, inValue2);
			characterList.push_back(zombPtr);
			break;

			// case 3 is if the user wants to create a normal character
		case 3:
			cout << "Character Name: ";
			cin >> inString1;
			cout << "Characters health: ";
			cin >> inValue1;
			charPtr = new Characters(inString1, inValue1);
			characterList.push_back(charPtr);
			break;
		}

	//breaks loop if the user enters 99
	} while (choice != 99);

	//this will display the list of characters the user has created
	if (characterList.size()) showCharacters();

	system("pause");
}


// function show characters defined
void showCharacters()
{
	//for each character in list display the information for them
	cout << "\n These are the Characters you created: " << endl;
	for (unsigned int i = 0; i < characterList.size(); i++)
	{
		charPtr = characterList[i];
		charPtr->Display();
	}
}