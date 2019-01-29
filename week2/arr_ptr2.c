#include <stdio.h>

#define ARR_SIZE 4

int main() {
    int ptr[] = {9, 3, 5, 12};
    
    //An array is simply a pointer, we can use the same operations
    printf("The current address that array shows: %p\n", ptr);
    printf("The current value in the address that the array shows: %d\n", ptr[0]);

    printf("The current address that array shows: %p\n", ptr+1);
    printf("The current value in the address that the array shows: %d\n", ptr[1]);

    for(int i=0; i<ARR_SIZE; i++) {
        printf("Element at index %d is: %d\n", i, ptr[i]);
    }

    return 0;
}


/*
int main() {
    int arr[] = {3, 5, 8 ,10};
    int *ptr = arr;
  
    printf("The current address that pointer shows: %p\n", (void*)ptr);
    printf("The current value in the address pointer shows: %d\n", *ptr); 
    ptr++;
  
    printf("The current address that pointer shows: %p\n", (void*)ptr);
    printf("The current value in the address pointer shows: %d\n", *ptr);
 
    return 0;
}
*/
