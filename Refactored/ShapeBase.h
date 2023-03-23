#pragma once
#include "TransformBase.h"

namespace Shapes
{
	class ShapeBase
	{
	public:
		ShapeBase(bool transformable);
		double getVolume() const;
		double getArea() const;
		void applyTransform(const TransformBase& transform);
	protected:
		double m_volume = 0;
		double m_area = 0;
		bool m_transformable = false;
		virtual void checkTansformable() const;
		virtual void doApplyTransform(const TransformBase& transform) = 0;
		virtual void calculateAggregates() = 0;
	};
}