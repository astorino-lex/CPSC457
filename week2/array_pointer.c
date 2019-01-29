#include <stdio.h>

int main() {
    int arr[] = {3, 5, 8 ,10};
    int *ptr = arr;

    printf("The current address that pointer shows: %p\n", ptr);
    printf("The currnet value in the address pointer shows: %d\n", *ptr);

    ptr++;
    
    printf("The current address that pointer shows: %p\n", ptr);
    printf("The currnet value in the address pointer shows: %d\n", *ptr);

	return 0;
}
