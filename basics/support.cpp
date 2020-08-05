//
// Created by bbdnet2204 on 2020/08/05.
//

#include <iostream>

extern int count1;

void write_extern(void) {
    std::cout << "Count is " << count1 << std::endl;
}

