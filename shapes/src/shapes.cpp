
#include <iostream>
using namespace std;

#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"

#include <vector>

int main() {
    cout << "Shape OO Design Example" << endl;

    std::vector<example::ShapeBase *> m_shapes;

    example::Triangle *pTriangle = new example::Triangle(2.0, 2.0);
    m_shapes.push_back(pTriangle);

    example::Rectangle *pRect = new example::Rectangle(3.0, 3.0);
    m_shapes.push_back(pRect);

    example::Square *pSquare = new example::Square(5.0);
    m_shapes.push_back(pSquare);

    std::vector<example::ShapeBase *>::iterator iter;
    for(iter = m_shapes.begin(); iter != m_shapes.end(); ++iter) {
        (*iter)->area();
    }
}
