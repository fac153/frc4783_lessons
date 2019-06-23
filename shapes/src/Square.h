/*
 * Square.h
 *
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Rectangle.h"

namespace example {

class Square: public Rectangle {
public:
    Square(float length);
    virtual ~Square();

};

} /* namespace example */

#endif /* SQUARE_H_ */
