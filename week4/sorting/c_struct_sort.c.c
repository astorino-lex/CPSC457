#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_F_LEN 15
#define MAX_F_CNT 20

//Definition of the file structure
typedef struct {
    char file_name[MAX_F_LEN];
    int file_size;
} file_info;

//If f1 should be before f2, this function should return negative value
//So, file with a bigger size will be before the others
int comp_files(const void *f1, const void *f2) {
    return ((file_info*)f2)->file_size - ((file_info*)f1)->file_size;
}

int main() {
    //Open the data file and check if it exists
    FILE *inp = fopen("file_data.txt", "r");
    if(!inp) {
        fprintf(stderr, "You should download file_data.txt file, too!\n");
        exit(1);
    }

    file_info file_arr[MAX_F_CNT];
    int file_cnt = 0;
    char name[MAX_F_LEN];
    int size;

    //Until we can read 2 values: 1 string and 1 integer
    while(fscanf(inp," %s %d ", name, &size) == 2) {
        //f_name points to the same location for the current file name
        //This is for making the code cleaner
        char *f_name = file_arr[file_cnt].file_name;
        
        //Clean the memory location
        memset(f_name, 0, sizeof(f_name));
        //Copy values from the read string into the structure
        strcpy(f_name, name);
        file_arr[file_cnt].file_size = size;

        //Increment number of files counter
        file_cnt++;
    }

    //Sort the array using the comparison function
    qsort(file_arr, file_cnt, sizeof(file_info), comp_files);

    for(int i=0; i<file_cnt; i++) {
        printf("%s %d\n", file_arr[i].file_name, file_arr[i].file_size);
    }

    return 0;
}
