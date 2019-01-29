#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *str;
    char str2[10];
    char *str3;
    str = "hello";
    //str[2] = 'L'; ERROR, str points to a const char
    printf("The address in str is %p\n", (void*)str);
    printf("%s\n", str);

    /*
    * GIVES ERROR, there is no assignment for arrays 
    str2 = str; 
    */
    strcpy(str2, str);
    printf("str2: %s\n", str2);

    str3 = str; //Shallow copy, str3 shows the same address as str
    printf("str: %s, str3: %s\n", str, str3);

    str3 = (char*) malloc(sizeof(char) * 7);
    strcpy(str3, str);
    str3[5] = '!';
    printf("str3: %s\n", str3);
    
    free(str3);

    return 0;
}
