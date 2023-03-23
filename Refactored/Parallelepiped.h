#pragma once
#include "SimpleShape.h"


namespace Shapes
{
	class Parallelepiped : public SimpleShape
	{
	public:
		Parallelepiped(Point leftTopUp, double sizeX, double sizeY, double sizeZ);
	protected:
		void calculateAggregates() override;
	};
}