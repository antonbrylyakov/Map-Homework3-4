#pragma once
#include "SimpleShape.h"

namespace Shapes
{
	class Line : public SimpleShape
	{
	public:
		Line(Point p1, Point p2);
	protected:
		void calculateAggregates() override;
	};
}