#include <stdio.h>

int modify(int x) {
	x = x + 5;
	return x;
}

int main() {
	int x = 3;
    //Instead of assigning the return value, use pointers to change the value of x inside the function
	x = modify(x);
	printf("%d\n", x);
	
	return 0;
}
