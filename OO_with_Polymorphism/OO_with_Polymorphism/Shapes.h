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

class Circle : public Shape
{
public:
	Circle();
	Circle(string N, string C, int R);
	int GetRadius();
	void SetRadius(int);
	void Display();
private: 
	int radius;
};
class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(string rName, string rColor, int width, int height);
	int GetWidth();
	void SetWidth(int);
	int GetHeight();
	void SetHeight(int);
	void Display();
	void Display(bool details);
private:
	int width;
	int height;

};
#endif