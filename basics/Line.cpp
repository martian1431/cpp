//
// Created by bbdnet2204 on 2020/08/06.
//

#include "Line.h"
#include <iostream>

Line::Line(double len): length(len) {
    std::cout << "Object is being created" << std::endl;
}

Line::~Line(void ) {
    std::cout << "Object is being deleted" << std::endl;
}

void Line::setLength( double len ) {
    length = len;
}
double Line::getLength( void ) {
    return length;
}
