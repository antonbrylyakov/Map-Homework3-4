#include "Parallelepiped.h"

namespace Shapes
{
	Parallelepiped::Parallelepiped(Point leftTopUp, double sizeX, double sizeY, double sizeZ) : SimpleShape(true)
	{
		m_points.push_back(leftTopUp);
		m_points.push_back(Point(leftTopUp.getX() + sizeX, leftTopUp.getY(), leftTopUp.getZ()));
		m_points.push_back(Point(leftTopUp.getX() + sizeX, leftTopUp.getY() - sizeY, leftTopUp.getZ()));
		m_points.push_back(Point(leftTopUp.getX(), leftTopUp.getY() - sizeY, leftTopUp.getZ()));
		m_points.push_back(Point(leftTopUp.getX() + sizeX, leftTopUp.getY(), leftTopUp.getZ() - sizeZ));
		m_points.push_back(Point(leftTopUp.getX() + sizeX, leftTopUp.getY(), leftTopUp.getZ() - sizeZ));
		m_points.push_back(Point(leftTopUp.getX() + sizeX, leftTopUp.getY() - sizeY, leftTopUp.getZ() - sizeZ));
		m_points.push_back(Point(leftTopUp.getX(), leftTopUp.getY() - sizeY, leftTopUp.getZ() - sizeZ));
		calculateAggregates();
	}
	void Parallelepiped::calculateAggregates()
	{
		const auto p0 = m_points[0];
		const auto p2 = m_points[2];
		const auto p4 = m_points[4];
		const auto sizeX = abs(p0.getX() - p2.getX());
		const auto sizeY = abs(p0.getY() - p2.getY());
		const auto sizeZ = abs(p0.getZ() - p4.getZ());
		m_area = 2 * sizeX * sizeY + 2 * sizeX * sizeZ + 2 * sizeY * sizeZ;
		m_volume = sizeX * sizeY * sizeZ;
	}
}

