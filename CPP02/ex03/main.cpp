#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

extern bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    Point a(0.0f, 0.0f);
    Point b(1.0f, 0.0f);
    Point c(0.5f, 1.0f);

    Point inside(0.5f, 0.5f);
    Point outside(2.0f, 2.0f);
    Point onEdge(0.5f, 0.0f);
    Point point(0.3f, 0.3f);

    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "On Edge: " << bsp(a, b, c, onEdge) << std::endl;
    std::cout << "Point: " << bsp(a, b, c, point) << std::endl;

    return 0;
}
