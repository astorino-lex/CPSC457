#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *in_fd = fopen("input.txt", "r");
    FILE *out_fd = fopen("output.txt", "w");
    
    if(in_fd == NULL) {
        printf("Error while opening the file!\n");
        exit(1);
    }

    int f_num, s_num;
    float flt;

    fscanf(in_fd, "%d %d %f", &f_num, &s_num, &flt);

    printf("%d %d %f\n", f_num, s_num, flt);
    fprintf(out_fd, "The float in the file is %f\n", flt);

    //Do not forget to close the file descriptors!!!
    fclose(in_fd);
    fclose(out_fd);
    return 0;
}
