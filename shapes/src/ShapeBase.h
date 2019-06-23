/*
 * ShapeBase.h
 *
 */

#ifndef SHAPEBASE_H_
#define SHAPEBASE_H_

namespace example {

class ShapeBase {
public:
    ShapeBase();
    virtual ~ShapeBase();

    virtual float perimeter() = 0;
    virtual float area() = 0;

    virtual float volume() = 0;
    virtual float surfaceArea() = 0;
};

} /* namespace example */

#endif /* SHAPEBASE_H_ */
