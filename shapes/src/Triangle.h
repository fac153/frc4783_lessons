/*
 * Triangle.h
 *
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Polygon.h"

namespace example {

class Triangle: public Polygon {
public:
    Triangle(float base, float height);
    virtual ~Triangle();

    float perimeter() override;
    float area() override;

protected:
    float m_base;
    float m_height;
};

} /* namespace example */

#endif /* TRIANGLE_H_ */
