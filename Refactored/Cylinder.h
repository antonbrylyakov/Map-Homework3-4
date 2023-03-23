#pragma once
#include "ShapeBase.h"

namespace Shapes
{
	class Cylinder : public ShapeBase
	{
	public:
		Cylinder(Point center, double radius, double height);
		Point getCenter() const;
		double getRadius() const;
		double getHeight() const;
	protected:
		Point m_center;
		double m_radius;
		double m_height;
		void calculateAggregates() override;
	};
}