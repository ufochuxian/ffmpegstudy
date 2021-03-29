#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#import <objc/runtime.h>

//C++函数的调用，必须首先进行申明
int testArray() {

    int arr[10] = {0, 2, 3, 4, 6, 78, 9, 20};

    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == 78) {
            printf("78所在的位置是:%d", i);
        }
    }

    return 0;

}

//
//int main(int argc, char *argv[]) {
////    int a= 100;
////    float b=5.89;
////    char c = 'Y';
////
////    printf("Hello World\n");
////    printf("a=%d\n",a);
////    printf("b=%f\n",b);
////    printf("c=%c\n",c);
////    return 0;
////
////    int a = 100;
////    int *p = &a;
////    printf("p:%p",p);
//
//
//
////    testNum();
//    testArray();
//    return 0;
//}

int testNum() {

    int a = 100;

    if (isalnum(a)) {
        printf("%d是一个数字", a);
    } else {
        printf("%d不是一个数字", a);
    }

    return 0;
}

