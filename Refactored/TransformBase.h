#pragma once
#include "Point.h"

namespace Shapes
{
	// Базовый класс трансформаций. Трансформация умеет преобразовывать точку
	class TransformBase
	{
	public:
		virtual Point apply(const Point& point) const = 0;
	};
}