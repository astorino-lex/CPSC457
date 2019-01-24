#include <stdio.h>

int main() {
    enum Color {red=23, green, blue};
    enum Color n = green;
    printf("%d\n", n);
    return 0;
}
