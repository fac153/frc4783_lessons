/*
 * Polygon.h
 *
 */

#ifndef POLYGON_H_
#define POLYGON_H_

#include "ShapeBase.h"

namespace example {

class Polygon: public ShapeBase {
public:
    Polygon();
    virtual ~Polygon();

    float volume() override;
    float surfaceArea() override;

};

} /* namespace example */

#endif /* POLYGON_H_ */
