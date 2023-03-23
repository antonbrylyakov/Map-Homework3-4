#include <iostream>
#ifdef _WIN32
#include "windows.h"
#endif

#include "Refactored/Rectangle.h"
#include "Refactored/Point.h"
#include "Refactored/ZoomInX.h"
#include "Refactored/Parallelepiped.h"
#include "Refactored/ZoomOut.h"


int main()
{
	setlocale(LC_ALL, "Russian");
#ifdef _WIN32
	SetConsoleCP(1251);
#endif

	Shapes::Rectangle rec(Shapes::Point(0, 1), 10, 10);
	std::cout << "Прямоугольник: площадь = " << rec.getArea() << ", Объем: " << rec.getVolume() << std::endl;
	// Растяжение по X вдвое
	Shapes::ZoomInX transtorm1(2);
	rec.applyTransform(transtorm1);
	std::cout << "Прямоугольник после преобразования: площадь = " << rec.getArea() << ", Объем: " << rec.getVolume() << std::endl;

	std::cout << std::endl;

	Shapes::Parallelepiped cube(Shapes::Point(1, 1), 10, 10, 10);
	std::cout << "Куб: площадь = " << cube.getArea() << ", Объем: " << cube.getVolume() << std::endl;
	// Растяжение по X вдвое
	Shapes::ZoomOut transtorm2(2);
	cube.applyTransform(transtorm2);
	std::cout << "Куб после преобразования: площадь = " << cube.getArea() << ", Объем: " << cube.getVolume() << std::endl;

}