#pragma once
#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

class Shape
{
public:
	Shape();
	Shape(string N, string C);

	string GetName();
	void SetName(string);
	string GetColor();
	void SetColor(string);
	void Display();
protected:
	string name;
	string color;
private:
};

class Rectangle : public Shape
{
public:
	Circle();
	Circle(string N, string C, int R);
	int GetRadius();
	void SetRadius();
	void Display
}
#endif