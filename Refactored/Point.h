#pragma once

namespace Shapes
{
	// Точка
	class Point
	{
	public:
		Point(double x, double y);
		Point(double x, double y, double z);
		double getX() const;
		double getY() const;
		double getZ() const;
	protected:
		double m_x = 0;
		double m_y = 0;
		double m_z = 0;
	};
}