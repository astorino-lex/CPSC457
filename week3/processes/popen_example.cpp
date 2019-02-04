#include <iostream>
#include <cstdio>
#define MAX_LEN 100

using namespace std;
int main(){
	FILE *fp;
	char buffer[MAX_LEN];
	//Gives the first 10 lines of the source code
	fp = popen("cat popen_example.cpp | head -n 10", "r");
	if(!fp) {
		//Handle error
	}
	while(fgets(buffer, MAX_LEN, fp)) {
		printf("%s", buffer);
	}
	pclose(fp);
	return 0;
}
