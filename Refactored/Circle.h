#pragma once
#include "ShapeBase.h"

namespace Shapes
{
	class Circle : public ShapeBase
	{
	public:
		Circle(Point center, double radius);
		Point getCenter() const;
		double getRadius() const;
	protected:
		Point m_center;
		double m_radius;
		void calculateAggregates() override;
	};
}