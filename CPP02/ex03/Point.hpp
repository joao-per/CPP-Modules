/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:22:51 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/01 16:23:03 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#endif
