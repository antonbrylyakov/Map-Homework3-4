#include "ShapeBase.h"
#include <stdexcept>

namespace Shapes
{
	ShapeBase::ShapeBase(bool transformable) : m_transformable(transformable)
	{
	}

	double ShapeBase::getVolume() const
	{
		return m_volume;
	}

	double ShapeBase::getArea() const
	{
		return m_area;
	}

	void ShapeBase::applyTransform(const TransformBase& transform)
	{
		checkTansformable();
		doApplyTransform(transform);
		calculateAggregates();
	}

	void ShapeBase::checkTansformable() const
	{
		if (!m_transformable)
		{
			throw std::logic_error("Фигура не является трансформируемой");
		}
	}
}
