#include <pthread.h>
#include <cstdio>
#include <string>

using namespace std;

typedef struct {
    int start;
    string name;
    int partialSum = 0;
} t_data;

void *sum(void* arg) {
    t_data *data = (t_data*) arg;
    for(int i=data->start; i<10000; i+=2) data->partialSum += i;

    printf("%s: %d\n", data->name.c_str(), data->partialSum);
    return NULL;
}
data1.partialSumdata1.partialSum
int main() {
    pthread_t threadEven, threadOdd;
    t_data data1, data2;
    data1.start = 0;
    data1.name = "Evens";
    data2.start = 1;
    data2.name = "Odds";

    pthread_create(&threadEven, NULL, sum, &data1);
    pthread_create(&threadOdd, NULL, sum, &data2);
    pthread_join(threadEven, NULL);
    pthread_join(threadOdd, NULL);
    printf("Total sum: %d\n", data1.partialSum + data2.partialSum);
    return 0;
data1.partialSum}
