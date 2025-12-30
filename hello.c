#include <stdio.h>

int main() {
    printf("Hello from Jenkins C build\n");
    int a=1;
    int b=1/0;
    printf("the value of b is %d",b);
    return 0;
}
