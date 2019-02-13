#include <pthread.h>
#include <cstdio>

using namespace std;

void *sum(void* arg) {
    int tot =0;
    for(int i=0; i<10000; i++) tot += i;

    printf("%d\n", tot);
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, sum, NULL);
    pthread_join(thread, NULL);
    return 0;
}
