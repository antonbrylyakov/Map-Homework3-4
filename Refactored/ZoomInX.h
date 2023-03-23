#pragma once
#include "Scale.h"

namespace Shapes
{
	class ZoomInX : public Scale
	{
	public:
		ZoomInX(double scale) : Scale(scale, 1, 1) {}
	};
}