#include "Point.hpp"

bool sameSide(const Point& p1, const Point& p2, const Point& a, const Point& b) {
    Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) - (b.getY() - a.getY()) * (p1.getX() - a.getX());
    Fixed cp2 = (b.getX() - a.getX()) * (p2.getY() - a.getY()) - (b.getY() - a.getY()) * (p2.getX() - a.getX());
    return cp1 * cp2 >= Fixed(0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    return sameSide(point, a, b, c) && sameSide(point, b, a, c) && sameSide(point, c, a, b);
}
