#include "Line.h"

namespace Shapes
{
	Line::Line(Point p1, Point p2) : SimpleShape(true)
	{
		m_points.push_back(std::move(p1));
		m_points.push_back(std::move(p2));
		calculateAggregates();
	}

	void Line::calculateAggregates()
	{
		m_area = 0;
		m_volume = 0;
	}
}

