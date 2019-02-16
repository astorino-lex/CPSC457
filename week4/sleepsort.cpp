#include <iostream>
#include <vector>
#include <pthread.h>
#include <time.h>

using namespace std;

void* solve(void* arg) {
    int num = *(int*) arg;
    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = num * 1000000;
    nanosleep(&ts, NULL);
    cout<<num<<endl;

    return NULL;
}

int main() {
    vector<int> numbers = {554, 12, 39, 432, 211, 123, 44, 65, 77, 632, 332};
    vector<pthread_t> threads(numbers.size());

    for(int i=0; i<numbers.size(); i++) {
        pthread_create(&threads[i], NULL, solve, &numbers[i]);
    }

    for(auto &thread: threads) {
        pthread_join(thread, NULL);
    }
}
