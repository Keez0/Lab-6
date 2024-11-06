#include "Shape.h"
#include <iostream>

void Shape::setBackground(string color) {
	background = color;
}

string Shape::getBackground() const{
	return background;
}

void Shape::draw() const{
	cout << "drawing a shape"<<endl;
}