#pragma once
#include "TransformBase.h"

namespace Shapes
{
	// Базовый класс для трансформаций масштаба
	class Scale : public TransformBase
	{
	public:
		Scale(double scaleX, double scaleY);
		Scale(double scaleX, double scaleY, double scaleZ);
		Point apply(const Point& point) const override;
	protected:
		double m_scaleX = 1;
		double m_scaleY = 1;
		double m_scaleZ = 1;
	};
}