
// Circle.cpp - You CAN edit this file!

#include "Circle.h"

namespace { 
	const float PI = 3.14159265359f; 
}
// Use this to aproximate Pi
Circle::Circle(const float radius) {
	SetRadius(radius);
}
	

void Circle::SetRadius(const float radius) {
	if (radius > 0) {
		m_radius = radius;
	}
	else
	{
		m_radius = 1;
	}
}
float Circle::GetArea() const {
	return PI * m_radius * m_radius;
}

float Circle::GetPerimeter() const {
	return 2.0 * PI * m_radius;
}