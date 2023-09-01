/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:22:37 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/01 16:22:38 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 * The function checks if two points are on the same side of a line defined by two other points.
 * 
 * @param p1 p1 is a Point object representing the first point.
 * @param p2 p2 is a Point object representing the second point.
 * @param a The parameter "a" represents the first point of a line segment.
 * @param b The parameter "b" represents a point in a 2D coordinate system.
 * 
 * @return a boolean value.
 */
bool sameSide(const Point& p1, const Point& p2, const Point& a, const Point& b) {
    /* The expression `Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) - (b.getY() -
    a.getY()) * (p1.getX() - a.getX());` is calculating the cross product between two vectors. */
    Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) - (b.getY() - a.getY()) * (p1.getX() - a.getX());
    Fixed cp2 = (b.getX() - a.getX()) * (p2.getY() - a.getY()) - (b.getY() - a.getY()) * (p2.getX() - a.getX());
    /* The expression `return cp1 * cp2 >= Fixed(0);` is checking if the two cross products `cp1` and
    `cp2` have the same sign or are equal to zero. */
    return cp1 * cp2 >= Fixed(0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    /* The expression `return sameSide(point, a, b, c) && sameSide(point, b, a, c) && sameSide(point,
    c, a, b);` is checking if a given point `point` is inside a triangle defined by three other
    points `a`, `b`, and `c`. */
    return sameSide(point, a, b, c) && sameSide(point, b, a, c) && sameSide(point, c, a, b);
}
