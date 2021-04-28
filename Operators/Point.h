#pragma once
#include <iostream>

namespace scopeA {

	class Point
	{
	public:
		Point() : x(0), y(0) { }
		Point(float x, float y) : x(x), y(y) { }

		Point operator+(Point& point);

		Point operator-(Point& point);

		void Add(Point& point);

		void Write(std::ostream& outputStream);

	public:
		float x, y;
	};


}
