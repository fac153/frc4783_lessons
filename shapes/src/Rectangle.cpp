/*
 * Rectangle.cpp
 *
 */

#include "Rectangle.h"

#include <iostream>

namespace example {

Rectangle::Rectangle(float length, float width) :
    m_length(length),
    m_width(width) {
}

Rectangle::~Rectangle() {
    // TODO Auto-generated destructor stub
}

float Rectangle::perimeter() {
    float ret = 2 * (m_length + m_width);
    std::cout << "Rectangle::area= " << ret << std::endl;
    return ret;
}

float Rectangle::area() {
    float ret = m_length * m_width;
    std::cout << "Rectangle::area= " << ret << std::endl;
    return ret;
}

} /* namespace example */
