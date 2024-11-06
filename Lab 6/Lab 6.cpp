#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>


void showShape(Shape& shape) {
    shape.draw();
}


int main()
{
    Circle* circlePtr = new Circle;
    Rectangle* rectanglePtr = new Rectangle;
    vector<Shape*> shapes;
    shapes.push_back(circlePtr);
    shapes.push_back(rectanglePtr);
    for (int i = 0; i < shapes.size(); i++) {
        showShape(*shapes.at(i));
    }
    delete circlePtr;
    delete rectanglePtr;
    unique_ptr<Circle> uniqueCircle = make_unique<Circle>();
    unique_ptr<Rectangle> uniqueRectangle = make_unique<Rectangle>();
    vector<unique_ptr<Shape>> uniqueShapes;
    uniqueShapes.push_back(move(uniqueCircle));
    uniqueShapes.push_back(move(uniqueRectangle));
    for (int i = 0; i < shapes.size(); i++) {
        showShape(*uniqueShapes.at(i));
    }

    

    
    
}


