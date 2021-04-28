#include "Point.h"

namespace scopeA {

	Point Point::operator + (Point& point) {
		Point p;
		p.x = x + point.x;
		p.y = y + point.y;
		return p;
	}

	Point Point::operator - (Point& point) {
		Point p;
		p.x = x - point.x;
		p.y = y - point.y;
		return p;
	}



	void Point::Add(Point& point)
	{
		x += point.x;
		y += point.y;

	}

	void Point::Write(std::ostream& outputStream)
	{
		outputStream << x << " : " << y << std::endl;
	}

}

