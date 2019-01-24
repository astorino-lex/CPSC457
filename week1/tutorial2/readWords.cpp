#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file;
    file.open("input2.txt");
    if(!file.is_open()) {
        cout<<"Error opening the file"<<endl;
        exit(1);
    }
    string str;

    while(file>>str) {
        cout<<str<<endl;
    }
    return 0;
}
