/*
 * Triangle.cpp
 *
 */

#include "Triangle.h"

#include <iostream>

namespace example {

Triangle::Triangle(float base, float height) :
    m_base(base),
    m_height(height) {


}

Triangle::~Triangle() {
    // TODO Auto-generated destructor stub
}

float Triangle::perimeter() {
    return 0.0;
}

float Triangle::area() {
    float ret = 0.5 * m_base * m_height;
    std::cout << "Triangle::area= " << ret << std::endl;
    return ret;
}

} /* namespace example */
