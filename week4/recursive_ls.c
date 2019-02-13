#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

void visitDir(const char *path, int level) {
    DIR *directory = opendir(path);    
    if(!directory) return;

    struct dirent *entry = NULL;
    while(entry = readdir(directory)) {
        for(int i=0; i<level; i++) {
            printf("\t");
        }
        printf("%s\n", entry->d_name);
        if(entry->d_type == DT_DIR) {
            if(strcmp(".", entry->d_name) && strcmp("..", entry->d_name)) {
                char childPath[1000];
                sprintf(childPath, "%s/%s", path, entry->d_name);
                visitDir(childPath, level+1);
            }
        }
    }
}

int main() {
    visitDir(".", 0);
    return 0;
}
