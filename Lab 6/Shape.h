#pragma once
#include <string>
using namespace std;
class Shape
{

protected:
	string background;

public:
	void setBackground(string color);
	string getBackground() const;
	virtual void draw() const;



};

