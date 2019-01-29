#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr;

    int row_num, col_num;
    printf("Enter row number and column number\n");
    scanf("%d %d", &row_num, &col_num);

    arr = (int**) malloc(row_num * (sizeof(int*)));

    for(int i=0; i<row_num; i++) {
        arr[i] = (int*) malloc(col_num * sizeof(int));
    }

    for(int i=0; i<row_num; i++) {
        for(int j=0; j<col_num; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nThe transpose of the matrix is:\n");
    for(int j=0; j<col_num; j++) {
        for(int i=0; i<row_num; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<row_num; i++) {
        free(arr[i]);
    }

    free(arr);

    return 0;
}
