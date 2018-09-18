#include <iostream>
#include <iomanip>
#include <vector>
#include "Shapes.h"
using namespace std;

void showCharacters();

vector<Shape *> shapeList;
Shape * shapePtr;

void main()
{
	string inString1, inString2;
	int inValue1, inValue2;
	int choice;
	Rectangle * rectPtr;
	Circle * cirPtr;

	do
	{
		cout << "\nMenu for entering shape:\n";
		cout << "1: To enter a rectangle\n";
		cout << "2: To enter a circle\n";
		cout << "99: Finish entering\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Rectangle Name: ";
			cin >> inString1;
			cout << "Rectangle Color: ";
			cin >> inString2;
			cout << "Rectangle Width: ";
			cin >> inValue1;
			cout << "Rectangle Height: ";
			cin >> inValue2;
			rectPtr = new Rectangle();
			rectPtr->SetName(inString1);
			rectPtr->SetColor
		}
	}
}