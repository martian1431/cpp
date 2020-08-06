//
// Created by bbdnet2204 on 2020/08/06.
//

#ifndef BASICS_LINE_H
#define BASICS_LINE_H


class Line {
    public:
        void setLength( double len );
        double getLength( void );
        Line(double len);  // This is the constructor
        ~Line();  // This is the destructor: declaration
    private:
        double length;
};


#endif //BASICS_LINE_H
