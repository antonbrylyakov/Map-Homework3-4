#include "SimpleShape.h"

namespace Shapes
{
	SimpleShape::SimpleShape(bool transformable) : ShapeBase(transformable)
	{
	}

	size_t SimpleShape::getPointNum() const
	{
		return m_points.size();
	}

	Point SimpleShape::getPoint(size_t n) const
	{
		return m_points.at(n);
	}

	void SimpleShape::doApplyTransform(const TransformBase& transform)
	{
		for (auto i = 0; i < m_points.size(); ++i)
		{
			m_points[i] = transform.apply(m_points[i]);
		}
	}
}
