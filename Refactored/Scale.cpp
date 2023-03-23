#include "Scale.h"

namespace Shapes
{
	Scale::Scale(double scaleX, double scaleY) : m_scaleX(scaleX), m_scaleY(scaleY)
	{
	}

	Scale::Scale(double scaleX, double scaleY, double scaleZ) : m_scaleX(scaleX), m_scaleY(scaleY), m_scaleZ(scaleZ)
	{
	}

	Point Scale::apply(const Point& point) const
	{
		return Point
		(
			m_scaleX * point.getX(),
			m_scaleY * point.getY(),
			m_scaleZ * point.getZ()
		);
	}
}