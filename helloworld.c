#include <stdlib.h>
#include <printf.h>


int main(int argc,char* argv[]) {
//    int a= 100;
//    float b=5.89;
//    char c = 'Y';
//
//    printf("Hello World\n");
//    printf("a=%d\n",a);
//    printf("b=%f\n",b);
//    printf("c=%c\n",c);
//    return 0;

    int a = 100;
    int *p = &a;
    printf("p:%p",p);
    return 0;
}

