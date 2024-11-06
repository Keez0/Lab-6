#include "Rectangle.h"
#include <iostream>
Rectangle::Rectangle(): width(0), height(0) {}

Rectangle::Rectangle(int width, int height): width(width), height(height) {}

void Rectangle::draw() const{
	cout << "Drawing a rectangle"<<endl;
}

int Rectangle::getArea() {
	return height * width;
}