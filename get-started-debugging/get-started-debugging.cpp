#include "pch.h"

#include <string>
#include <vector>
#include <iostream>

class Shape
{
	int privateX = 0;
	int privateY = 0;
	int privateHeight = 0;
	int privateWidth = 0;
	


	int getX() const { return privateX; }
	void setX(int value) { privateX = value; }

	int getY() const { return privateY; }
	void setY(int value) { privateY = value; }

	int getHeight() const { return privateHeight; }
	void setHeight(int value) { privateHeight = value; }

	int getWidth() const { return privateWidth; }
	void setWidth(int value) { privateWidth = value; }



public:
	// Virtual method
	virtual void Draw()
	{
		std::wcout << L"Performing base class drawing tasks" << std::endl;
	}
};

class Circle : public Shape
{
public:
	void Draw() override
	{
		// Code to draw a circle...
		std::wcout << L"Drawing a circle" << std::endl;
		Shape::Draw();
	}
};

class Rectangle : public Shape
{
public:
	void Draw() override
	{
		// Code to draw a rectangle...
		std::wcout << L"Drawing a rectangle" << std::endl;
		Shape::Draw();
	}
};

class Triangle : public Shape
{
public:
	void Draw() override
	{
		// Code to draw a triangle...
		std::wcout << L"Drawing a trangle" << std::endl;
		Shape::Draw();
	}
};

int main(std::vector<std::wstring>& args)
{
	auto shapes = std::vector<Shape*>
	{
		new Rectangle(),
		new Triangle(),
		new Circle()
	};

	for (auto shape : shapes)
	{
		shape->Draw();
	}
}

/* Output:
Drawing a rectangle
Performing base class drawing tasks
Drawing a triangle
Performing base class drawing tasks
Drawing a circle
Performing base class drawing tasks
*/