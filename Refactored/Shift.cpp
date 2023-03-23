#include "Shift.h"


namespace Shapes
{
	Point Shift::apply(const Point& point) const
	{
		return Point
		(
			point.getX() + m_dx,
			point.getY() + m_dy,
			point.getZ() + m_dz
		);
	}

	double Shift::getDx()
	{
		return m_dx;
	}

	double Shift::getDy()
	{
		return m_dy;
	}

	double Shift::getDz()
	{
		return m_dz;
	}

	Shift::Shift(double dx, double dy) : m_dx(dx), m_dy(dy)
	{
	}

	Shift::Shift(double dx, double dy, double dz) : m_dx(dx), m_dy(dy), m_dz(dz)
	{
	}
}
