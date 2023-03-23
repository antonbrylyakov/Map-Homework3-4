#pragma once
#include "ShapeBase.h"
#include <vector>

namespace Shapes
{
	// Класс для фигур, состоящих из точек
	class SimpleShape : public ShapeBase
	{
	public:
		SimpleShape(bool transformable);
		size_t getPointNum() const;
		Point getPoint(size_t n) const;
		void doApplyTransform(const TransformBase& transform);
	protected:
		std::vector<Point> m_points;
	};
}