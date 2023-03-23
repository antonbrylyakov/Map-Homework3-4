#include "Cylinder.h"
#include<cmath>
#include <corecrt_math_defines.h>
#include <stdexcept>

namespace Shapes
{
	Cylinder::Cylinder(Point center, double radius, double height) :
		ShapeBase(false),
		m_center(center),
		m_radius(radius),
		m_height(height)
	{
		if (m_radius < 0)
		{
			throw std::invalid_argument("Радиус не может быть отрицательным");
		}

		calculateAggregates();
	}

	Point Cylinder::getCenter() const
	{
		return m_center;
	}

	double Cylinder::getRadius() const
	{
		return m_radius;
	}

	double Cylinder::getHeight() const
	{
		return m_height;
	}

	void Cylinder::calculateAggregates()
	{
		m_area = M_PI * m_radius * m_radius;
		m_volume = M_PI * m_radius *m_radius + 2 * m_radius * m_height;
	}
}
