//
// Created by chen on 2021/5/5.
//

#include <stdint.h>
#include <cstdlib>
#include <cstdio>
#include "Malloc.h"

void Malloc::testMalloc() {

    //malloc函数和new的区别
    int *a = (int*)malloc(10);

    a[8] = 10;

    printf("%d", a[8]);

}


