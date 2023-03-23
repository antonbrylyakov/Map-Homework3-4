#pragma once
#include "Rectangle.h"
#include <cmath>

namespace Shapes
{
	Rectangle::Rectangle(Point leftTop, double sizeX, double sizeY) : SimpleShape(true)
	{
		m_points.push_back(leftTop);
		m_points.push_back(Point(leftTop.getX() + sizeX, leftTop.getY()));
		m_points.push_back(Point(leftTop.getX() + sizeX, leftTop.getY() - sizeY));
		m_points.push_back(Point(leftTop.getX(), leftTop.getY() - sizeY));
		calculateAggregates();
	}

	void Rectangle::calculateAggregates()
	{
		const auto p0 = m_points[0];
		const auto p2 = m_points[2];
		const auto sizeX = abs(p0.getX() - p2.getX());
		const auto sizeY = abs(p0.getY() - p2.getY());
		m_area = sizeX * sizeY;
		m_volume = 0;
	}
}

