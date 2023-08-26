#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(float const x, float const y);
    Point(const Point& src);
    Point& operator=(const Point& rhs);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};

#endif // POINT_HPP
