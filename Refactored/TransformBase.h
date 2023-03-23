#pragma once
#include "Point.h"

namespace Shapes
{
	// ������� ����� �������������. ������������� ����� ��������������� �����
	class TransformBase
	{
	public:
		virtual Point apply(const Point& point) const = 0;
	};
}