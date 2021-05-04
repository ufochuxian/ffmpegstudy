//
// Created by chen on 2021/3/29.
//

#include <iostream>

//这里显示的告知编译器，这里调用的是一个外部的"全局变量"
extern std::string name;

int sayHello() {

    std::cout << "hello " << name << ",nice to meet you";

    return 0;

}

void testEndlessFun() {

    for(;;) {
        printf("这是一个无线循环的函数\n");
    }

}