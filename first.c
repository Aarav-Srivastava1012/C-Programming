#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    union Data data;
    data.i = 10;
    printf("data.i = %d\n", data.i);
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);
    // Assigning new value overwrites previous one
    printf("data.i after assigning data.f = %d\n", data.i);
    return 0;
}