#pragma once
#include <iostream>
#include "Point.h"

using namespace std;
using namespace scopeA;

/*
Point operator + (Point& p1, Point& p2) {
	Point p;
	p.x = p1.x + p2.x;
	p.y = p1.y + p2.y;
	return p;
}*/

ostream& operator << (ostream& outputStream, Point p1) {
	outputStream << p1.x << " : " << p1.y << std::endl;
	return outputStream;
}

int main() {
	Point point1(4, 7);
	Point point2(2.0f, 4.0f);

	point2.Write(cout);

	//point2.Add(point1);

	Point point3 = point1 + point2;

	cout << point3 << point2;

}