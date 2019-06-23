/*
 * Rectangle.h
 *
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Quadrilateral.h"

namespace example {

class Rectangle: public Quadrilateral {
public:
    Rectangle(float length, float width);
    virtual ~Rectangle();

    float perimeter() override;
    float area() override;

protected:
    float m_length;
    float m_width;
};

} /* namespace example */

#endif /* RECTANGLE_H_ */
