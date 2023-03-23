#pragma once
#include "TransformBase.h"

namespace Shapes
{
	class Shift : public TransformBase
	{
	public:
		Shift(double dx, double dy);
		Shift(double dx, double dy, double dz);
		Point apply(const Point& point) const override;
		double getDx();
		double getDy();
		double getDz();
	protected:
		double m_dx = 0;
		double m_dy = 0;
		double m_dz = 0;
	};
}