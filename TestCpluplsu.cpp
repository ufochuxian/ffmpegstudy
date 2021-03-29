//
// Created by chen on 2021/3/28.
//

#include "TestCpluplsu.h"

#include <vector>

#include "Box.h"

using namespace std;

std::string name;

//这里显示告知编译器，这里的使用的是一个外部的函数
extern int sayHello();

//int testVecotr() {
//
//    vector<int> v = {10,11,12,4};
//
//    v.push_back(5);
//
//    for(int i = 0; i < sizeof(v);i++) {
//        printf("%d ",v[i]);
//    }
//    return 0;
//}

int main() {

//    char x[6] = {"hello"};

//    testVecotr();

//    Box box;
//
//    box.printStr();

    name = "yaoming";

    sayHello();

}

