#include <iostream>
#include <iomanip>
#include "Shapes.h"
using namespace std;

Shape::Shape() {}
Shape::~Shape() { cout << "Shape destructor called."; }

Shape::Shape(string N, string C)
{
	name = N;
	color = C;
}

string Shape::GetName() { return name; }
void Shape::SetName(string N) { name = N; }
