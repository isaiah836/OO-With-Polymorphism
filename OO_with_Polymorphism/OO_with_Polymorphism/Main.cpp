#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "Characters.h"
using namespace std;

void showCharacters();

std::vector<Characters *> characterList;
Characters * charPtr;

void main()
{
	string inString1, inString2;
	int inValue1, inValue2;
	int choice;
	Goblin * gobPtr;
	Zombie * zombPtr;

	do
	{
		cout << "\nMenu for entering shape:\n";
		cout << "1: To enter a Goblin\n";
		cout << "2: To enter a Zombie\n";
		cout << "3: To enter a Normal Character\n";
		cout << "99: Finish entering\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice)
		{
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
		case 3:
			cout << "Character Name: ";
			cin >> inString1;
			cout << "Characters health: ";
			cin >> inValue1;
			charPtr = new Characters(inString1, inValue1);
			characterList.push_back(charPtr);
			break;
		}
	} while (choice != 99);

	if (characterList.size()) showCharacters();

	system("pause");
}

void showCharacters()
{
	cout << "\n These are the Characters you created: " << endl;
	for (unsigned int i = 0; i < characterList.size(); i++)
	{
		charPtr = characterList[i];
		charPtr->Display();
	}
}