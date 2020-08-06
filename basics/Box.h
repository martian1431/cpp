//
// Created by bbdnet2204 on 2020/08/06.
//

#ifndef BASICS_BOX_H
#define BASICS_BOX_H


class Box {
    public:
        double length;   // Length of a box
        double breadth;  // Breadth of a box
        double height;   // Height of a box

        // Member functions declaration
        double getVolume(void);
        void setLength( double len );
        void setBreadth( double bre );
        void setHeight( double hei );
};


#endif //BASICS_BOX_H
