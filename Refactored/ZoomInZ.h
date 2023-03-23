#pragma once
#include "Scale.h"
namespace Shapes
{
	class ZoomInZ : public Scale
	{
	public:
		ZoomInZ(double scale) : Scale(1, 1, scale) {}
	};
}