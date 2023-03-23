#pragma once
#include "Scale.h"

namespace Shapes
{
	class ZoomInY : public Scale
	{
	public:
		ZoomInY(double scale) : Scale(1, scale, 1) {}
	};
}