#include <stdio.h>
int g = 10;

void func1() {
    printf("Inside func1, g = %d\n", g);
}

void func2() {
    printf("Inside func2, g = %d\n", g);
}

int main() {
    printf("Inside main, g = %d\n", g);
    func1();
    func2();
    return 0;
}