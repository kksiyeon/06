#include <stdio.h>

void func(void) {
    int x;
    printf("func x is at %p\n", &x);
}

void func_arg(int x) {
    printf("func_arg x is at %p\n", &x);
}

int main(void) {
    int x;
    printf("main x is at %p\n", &x);
    
    func();
    func();

    func_arg(x);

    return 0;
}