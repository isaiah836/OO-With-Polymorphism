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
			rectPtr->SetColor(inString2);
			rectPtr->SetWidth(inValue1);
			rectPtr->SetHeight(inValue2);
			shapeList.push_back(rectPtr);
			break;
		case 2:
			cout << "Circle Name: ";
			cin >> inString1;
			cout << "Circle Color: ";
			cin >> inString2;
			cout << "Circle Radius: ";
			cin >> inValue1;
			cirPtr = new Circle();
			cirPtr->SetName(inString1);
			cirPtr->SetColor(inString2);
			cirPtr->SetRadius(inValue1);
			shapeList.push_back(cirPtr);
			break;
		case 3:
			break;
		}
	} while (choice != 99);

	if (shapeList.size()) redrawShape();

	system("pause");
}

void redrawShape()
{
	cout << "\n These are the shapes: " << endl;
	for (unsigned int i = 0; i < shapeList.size(); i++)
}