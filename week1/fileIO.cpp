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

    while(!file.eof()) {
        getline(file, str);
        cout<<str;
        if(file.good()) {//Prevents extra newline at the end
            cout<<endl;
        }
    }
    file.close();
    return 0;
}
