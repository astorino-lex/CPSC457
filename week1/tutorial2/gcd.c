#include <stdio.h>

int gcd(int, int);

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", gcd(num1, num2));
    return 0;
}

int gcd(int num1, int num2) {
    int mn = num1 > num2 ? num2 : num1;
    int mx = num1 > num2 ? num1 : num2;

    return !mn ? mx : gcd(mn, mx % mn);
}
