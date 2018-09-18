#include <iostream>
#include <iomanip>
#include "Shapes.h"
using namespace std;

//Shape constructor 
Shape::Shape() 
{

}

//shape deconstructer
Shape::~Shape() 
{
	cout << "Shape destructor called."; 
}

//custom shape constructor
Shape::Shape(string N, string C)
{
	name = N;
	color = C;
}

//function GetName definition
string Shape::GetName() 
{ 
	return name;
}

//Function SetName definition
void Shape::SetName(string N) 
{ 
	name = N;
}

string Shape::GetColor()
{
	return color;
}

void Shape::SetColor(string C)
{
	color = C;
}
void Shape::Display()
{
	cout << "This shape is named " << name << "with " << color << " color." << endl << endl;
}

Circle::Circle()
{

}

Circle::Circle(string N, string C, int R)
{
	name = N;
	color = C;
	radius = R;
}
int Circle::GetRadius()
{
	return radius;
}
void Circle::SetRadius(int R)
{
	radius = R;
}
void Circle::Display()
{
	cout << "This Circle is named " << name << " with " << color << " color,\n" << " and radius = " << radius << endl << endl;
}
Rectangle::Rectangle()
{

}
Rectangle::Rectangle(string rName, string rColor, int rWidth, int rHeight) : Shape::Shape(rName, rColor)
{
	width = rWidth;
	height = rHeight;
}
int Rectangle::GetWidth()
{
	return width;
}
void Rectangle::SetWidth(int W)
{
	width = W;
}
int Rectangle::GetHeight()
{
	return height;
}
void Rectangle::SetHeight(int H)
{
	height = H;
}
void Rectangle::Display() 
{
	Shape::Display();
	cout << "It is a rectangle with width = " << width << ", and height = " << height << endl << endl;
}
void Rectangle::Display(bool details)
{
	Shape::Display();
	if (details)
	{
		cout << "It is a rectangle with width = " << width << ", and height = " << height << endl << endl;
	}
}