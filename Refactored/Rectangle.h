#pragma once
#include "SimpleShape.h"

namespace Shapes
{
	class Rectangle : public SimpleShape
	{
	public:
		Rectangle(Point leftTop, double sizeX, double sizeY);
	protected:
		void calculateAggregates() override;
	};
}