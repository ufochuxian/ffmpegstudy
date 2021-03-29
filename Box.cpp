//
// Created by chen on 2021/3/28.
//

#include "Box.h"
#include <iostream>

Box::Box() {
    this->s = "hello world";
}

void Box::printStr() {
    printf("s的长度是:%d", sizeof(this->s));
}
