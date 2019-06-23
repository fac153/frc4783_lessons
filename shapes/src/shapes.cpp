
#include <iostream>
using namespace std;

#include "Triangle.h"
#include <vector>

int main() {
    cout << "Shape OO Design Example" << endl; // prints !!!Hello World!!!

    std::vector<example::ShapeBase *> m_shapes;

    example::Triangle *pTriangle = new example::Triangle(2.0, 2.0);
    m_shapes.push_back(pTriangle);

    std::vector<example::ShapeBase *>::iterator iter;
    for(iter = m_shapes.begin(); iter != m_shapes.end(); ++iter) {
        (*iter)->area();
    }
}
