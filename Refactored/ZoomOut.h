#pragma once
#include "Scale.h"

namespace Shapes
{
	class ZoomOut : public Scale
	{
	public:
		ZoomOut(double scale) : Scale(1 / scale, 1 / scale, 1 / scale) {}
	};
}