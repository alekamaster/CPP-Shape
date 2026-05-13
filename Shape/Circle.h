
// Circle.h - You CAN edit this file!

#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:

	float m_radius;

public:

	Circle(const float radius);

	

	void SetRadius(const float radius);
	float GetRadius() const;

	float GetArea() const override;
	float GetPerimeter() const override;

};