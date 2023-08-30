#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(const Point& src) : x(src.x), y(src.y) {}

/**
 * The function is an assignment operator overload for the Point class that does nothing and
 * returns a reference to the current object.
 */
Point& Point::operator=(const Point& rhs) {
    (void)rhs;
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
