#include <iostream>
#include <pthread.h>
#include <string>
#include <vector>
#include <map>
#include <time.h>
#include <cstdlib>
#include <pthread.h>
#include <fstream>

#define USER_CNT 100
#define AMOUNT 1000
#define THREAD_CNT 6

using namespace std;

map<string, int> userNameIdMap;
string users[USER_CNT];
int amounts[USER_CNT];

void initUsers();

void* transferMoney(void *arg) {
    int id = *(int*)arg;
    string fileName = "input" + to_string(id) + ".txt";
    ifstream ifs(fileName.c_str());
    string from, to;
    int amount;
    while(ifs>>from>>to>>amount) {
        int fromId = userNameIdMap[from];
        int toId = userNameIdMap[to];
        amounts[fromId] -= amount;
        amounts[toId] += amount;
    }

    ifs.close();
    return NULL;
}

int main(int argc, char **argv) {
    initUsers();
    
    pthread_t *threads = (pthread_t*) malloc(THREAD_CNT * sizeof(pthread_t));
    int *params = (int*) malloc(THREAD_CNT * sizeof(int));

    for(int i=0; i<THREAD_CNT; i++) {
        params[i] = i+1;
        pthread_create(&threads[i], NULL, transferMoney, &params[i]);
    }

    for(int i=0; i<THREAD_CNT; i++) {
        pthread_join(threads[i], NULL);
    }
    
    int tot = 0;
    for(int i=0; i<USER_CNT; i++)
        tot += amounts[i];

    cout<<"TOTAL MONEY: "<<tot<<endl; 
    
    free(threads);
    free(params);

    return 0;
}

void initUsers() {
	int tot = 0;
	for(char c='A'; c<='Z'; c++) {
        string name="AA";
        name[0] = c;
		for(char d='A'; d<='Z'; d++) {
            name[1] = d;
            userNameIdMap[name] = tot;
            users[tot] = name;
            amounts[tot] = AMOUNT;
            tot++;
            if(tot == USER_CNT)
                return;
		}
	}
}
