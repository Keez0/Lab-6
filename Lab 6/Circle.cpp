#include "Circle.h"
#include <iostream>

Circle::Circle() : radius(0) {}
Circle::Circle(float radius) : radius(radius) {}
float Circle::getArea() const{
	return (3.14 * radius * radius);
}
void Circle::draw() const {
	cout << "Drawing a circle"<<endl;
}