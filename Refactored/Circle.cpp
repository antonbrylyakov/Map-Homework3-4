#include "Circle.h"
#include<cmath>
#include <corecrt_math_defines.h>
#include <stdexcept>

namespace Shapes
{
	Circle::Circle(Point center, double radius) : ShapeBase(false), m_center(center), m_radius(radius)
	{
		if (m_radius < 0)
		{
			throw std::invalid_argument("Радиус не может быть отрицательным");
		}

		calculateAggregates();
	}

	Point Circle::getCenter() const
	{
		return m_center;
	}

	double Circle::getRadius() const
	{
		return m_radius;
	}
	void Circle::calculateAggregates()
	{
		m_area = M_PI * m_radius * m_radius;
		m_volume = 0;
	}
}
